#include "TriangleDraw.h"
#include <cmath>
#include "Matrix.h"
#include "MathUtility.h"
#include <DxLib.h>
#include "Location.h"

TriangleDraw::TriangleDraw(std::string name_, float radius, unsigned int color_, Location centerLocation_, Vector3D vector_)
 : DrawBase(name_, -1, -1, color_, centerLocation_, vector_), angle_(0.0f), radius_(radius){
}

TriangleDraw::~TriangleDraw()
{
}

void TriangleDraw::Draw() {
	Location basePoint[3];
	basePoint[0] = { 0, 1 , 0};
	basePoint[1] = { cos(-60.0f * (MathUtilty::PI / 180.0f)), sin(-60.0f * (MathUtilty::PI / 180.0f)), 0 };
	basePoint[2] = { cos(240.0f * (MathUtilty::PI / 180.0f)), sin(240.0f * (MathUtilty::PI / 180.0f)), 0 };

	basePoint[0].SetX(radius_ * basePoint[0].GetX()); basePoint[0].SetY(radius_ * basePoint[0].GetY());
	basePoint[1].SetX(radius_ * basePoint[1].GetX()); basePoint[1].SetY(radius_ * basePoint[1].GetY());
	basePoint[2].SetX(radius_ * basePoint[2].GetX()); basePoint[2].SetY(radius_ * basePoint[2].GetY());

	point[0] = { postion.GetX() + basePoint[0].GetX(), postion.GetY() + basePoint[0].GetY(), 0};
	point[1] = { postion.GetX() + basePoint[1].GetX(), postion.GetY() + basePoint[1].GetY(), 0 };
	point[2] = { postion.GetX() + basePoint[2].GetX(), postion.GetY() + basePoint[2].GetY(), 0 };

	Matrix2D rotMat = Matrix2D::Rotation(angle_);
	for (int i = 0; i < 3; i++) {
		Vector3D relVec = Vector3D(point[i].GetX() - postion.GetX(), point[i].GetY() - postion.GetY(), 0.0f);
		Vector3D rotatedVec = Matrix2D::Transform(rotMat, relVec);
		point[i].Set(postion.GetX() + rotatedVec.GetX(), postion.GetY() + rotatedVec.GetY(), postion.GetZ());
	}

	DrawTriangle(point[0].GetX(), point[0].GetY(),
				 point[1].GetX(), point[1].GetY(),
				 point[2].GetX(), point[2].GetY(),
		GetColor(), TRUE);
}
