#pragma once
#include <string>
#include "Vector3D.h"
#include "Location.h"

class DrawBase {
private:
	std::string name;
	float width, height;
	unsigned int color;
	unsigned int customData; 
protected:
	Vector3D vector;
	Location postion;
public:
	DrawBase(std::string name_, float width_, float height_, unsigned int color_, Location postion_, Vector3D vector_);
	~DrawBase();
	virtual void Draw() = 0;

	std::string  GetName() const { return name; };
	float GetWidth() const { return width; };
	float GetHeight() const { return height; };
	Vector3D GetVector() const { return vector; };
	void SetVector(Vector3D vector_) { vector = vector_; };
	Location GetPostion() const { return postion; };
	void SetPostion(Location postion_) { postion = postion_; };
	unsigned int GetColor() const { return color; };
	void SetColor(unsigned int color_) { color = color_; };
	unsigned int GetCustomData() const { return customData; };
	void SetCustomData(unsigned int customData_) { customData = customData_; };
};