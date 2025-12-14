#pragma once
#include "DrawBase.h"

class CircleDraw : public DrawBase {
private:
	float radius ;
public:
	CircleDraw(std::string name_, float radius_, unsigned int color, Vector3D vector_, Vector3D postion_);
	~CircleDraw();
	float GetRadius() const { return radius; };
	void Draw() override;
};