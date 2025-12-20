#pragma once
#include "DrawBase.h"
#include "Vector3D.h"
#include "Location.h"

class CircleDraw : public DrawBase {
private:
	float radius ;
public:
	CircleDraw(std::string name_, float radius_, unsigned int color, Location postion_, Vector3D vector_);
	~CircleDraw();
	float GetRadius() const { return radius; };
	void Draw() override;
	bool IsCircleCollision(const CircleDraw& other) const;
};