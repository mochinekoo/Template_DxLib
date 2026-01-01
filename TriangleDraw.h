#pragma once
#include "DrawBase.h"
class TriangleDraw : public DrawBase {
private:
	float radius_;
	float angle_;
	Location point[3];
public:
	TriangleDraw(std::string name_, float radius_, unsigned int color_, Location location_, Vector3D vector_);
	~TriangleDraw();
	void Draw() override;
	float GetAngle() const { return angle_; };
	void SetAngle(float angle) { angle_ = angle; };
};

