#pragma once
#include "Vector3D.h"
class Location {
private:
	float x_;
	float y_;
	float z_;
public:
	Location(float x, float y, float z);
	float GetX() const;
	float GetY() const;
	float GetZ() const;
	void Set(float x, float y, float z);
	void SetX(float x) { x_ = x; };
	void SetY(float y) { y_ = y; };
	void SetZ(float z) { z_ = z; };
	float Distance(const Location& location) const;
	Vector3D ToVector(Location& location) const;

	//à»â∫ÇÕÉRÉsÅ[Çï‘Ç∑ä÷êî
	Location Add(float x, float y, float z) const;
	Location Subtract(float x, float y, float z) const;
	Location Multiply(float scalar) const;

};


