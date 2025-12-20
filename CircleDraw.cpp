#include "CircleDraw.h"
#include <DxLib.h>
#include <string>
#include "Vector3D.h"

CircleDraw::CircleDraw(std::string name_, float radius_, unsigned int color, Location postion_, Vector3D vector_)
 : DrawBase(name_, radius_, radius_, color, postion_, vector_), radius(radius_){
}

CircleDraw::~CircleDraw()
{
}

void CircleDraw::Draw() {
	DxLib::DrawCircle(postion.GetX(), postion.GetY(), GetRadius(), GetColor(), true);
}

bool CircleDraw::IsCircleCollision(const CircleDraw& other) const {
	float distance = postion.Distance(other.postion);
	return distance < (radius + other.radius);
}
