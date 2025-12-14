#pragma once
#include <string>
#include "Vector3D.h"

class DrawBase {
private:
	std::string name;
	float width, height;
	unsigned int color;
	unsigned int customData; 
protected:
	Vector3D vector;
	Vector3D postion;
public:
	DrawBase(std::string name_, float width_, float height_, unsigned int color_, Vector3D vector_, Vector3D postion_);
	~DrawBase();
	virtual void Draw() = 0;
	std::string  GetName() const { return name; };
	float GetWidth() const { return width; };
	float GetHeight() const { return height; };
	unsigned int GetColor() const { return color; };
	void SetColor(unsigned int color_) { color = color; };
	unsigned int GetCustomData() const { return customData; };
	void SetCustomData(unsigned int customData_) { customData = customData_; };
};