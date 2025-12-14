#include "CircleDraw.h"
#include <DxLib.h>
#include <string>
#include "Vector3D.h"

CircleDraw::CircleDraw(std::string name_, float radius_, unsigned int color, Vector3D vector_, Vector3D postion_)
 : DrawBase(name_, radius_, radius_, color, vector_, postion_), radius(radius_){
}

CircleDraw::~CircleDraw()
{
}

void CircleDraw::Draw() {
	DxLib::DrawCircle(postion.GetX(), postion.GetY(), GetRadius(), GetColor(), true);
}
