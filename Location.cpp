#include "Location.h"
#include <cmath>

Location::Location()
 : x_(0), y_(0), z_(0){
}

Location::Location(float x, float y, float z)
 : x_(x), y_(y), z_(z){
}

float Location::GetX() const {
	return x_;
}

float Location::GetY() const
{
	return y_;
}

float Location::GetZ() const
{
	return z_;
}

void Location::Set(float x, float y, float z) {
	x_ = x;
	y_ = y;
	z_ = z;
}

float Location::Distance(const Location& location) const {
	return sqrt((x_ - location.x_) * (x_ - location.x_) +
				(y_ - location.y_) * (y_ - location.y_) +
				(z_ - location.z_) * (z_ - location.z_));
}

Vector3D Location::ToVector(Location& location) const {
 	Location vecLoc = Location(x_, y_, z_).Subtract(location.GetX(), location.GetY(), location.GetZ());
	return Vector3D(vecLoc.GetX(), vecLoc.GetY(), vecLoc.GetZ());
}

Location Location::Add(float x, float y, float z) const {
	float newX = x_ + x;
	float newY = y_ + y;
	float newZ = z_ + z;
	return Location(newX, newY, newZ);
}

Location Location::Subtract(float x, float y, float z) const {
	float newX = x_ - x;
	float newY = y_ - y;
	float newZ = z_ - z;
	return Location(newX, newY, newZ);
}

Location Location::Multiply(float scalar) const {
	float newX = x_ * scalar;
	float newY = y_ * scalar;
	float newZ = z_ * scalar;
	return Location(newX, newY, newZ);
}
