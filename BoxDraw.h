#pragma once
#include "DrawBase.h"

class BoxDraw : public DrawBase {
private:

public:
	BoxDraw(std::string name_, float width_, float height, unsigned int color, Location postion_, Vector3D vector_);
	~BoxDraw();
	void Draw() override;
};

