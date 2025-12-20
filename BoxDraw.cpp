#include "BoxDraw.h"
#include "DrawBase.h"
#include <DxLib.h>

BoxDraw::BoxDraw(std::string name_, float width_, float height_, unsigned int color, Location postion_, Vector3D vector_)
	: DrawBase(name_, width_, height_, color, postion_, vector_) {
}

BoxDraw::~BoxDraw()
{
}

void BoxDraw::Draw() {
	DrawBox(GetPostion().GetX(), GetPostion().GetY(),
		GetPostion().GetX() + GetWidth(), GetPostion().GetY() + GetHeight(),
		GetColor(), true);
}
