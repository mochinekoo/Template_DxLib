#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D()
 : x_(0), y_(0), z_(0){
}

Vector3D::Vector3D(float x, float y, float z)
 : x_(x), y_(y), z_(z){
}

float Vector3D::GetX() const {
	return x_;
}

float Vector3D::GetY() const
{
	return y_;
}

float Vector3D::GetZ() const
{
	return z_;
}

void Vector3D::Set(float x, float y, float z) {
	x_ = x;
	y_ = y;
	z_ = z;
}

float Vector3D::Length() const {
	return sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}

float Vector3D::Distance(Vector3D& vector) const {
	return sqrt((x_ - vector.x_) * (x_ - vector.x_) +
				(y_ - vector.y_) * (y_ - vector.y_) +
				(z_ - vector.z_) * (z_ - vector.z_));
}

Vector3D Vector3D::Add(float x, float y, float z) const {
	float newX = x_ + x;
	float newY = y_ + y;
	float newZ = z_ + z;
	return Vector3D(newX, newY, newZ);
}

Vector3D Vector3D::Subtract(float x, float y, float z) const {
	float newX = x_ - x;
	float newY = y_ - y;
	float newZ = z_ - z;
	return Vector3D(newX, newY, newZ);
}

Vector3D Vector3D::Multiply(float scalar) const {
	float newX = x_ * scalar;
	float newY = y_ * scalar;
	float newZ = z_ * scalar;
	return Vector3D(newX, newY, newZ);
}

Vector3D Vector3D::Normalize() const {
	float newX = x_ / Length();
	float newY = y_ / Length();
	float newZ = z_ / Length();
	return Vector3D(newX, newY, newZ);
}

Vector3D Vector3D::Zero() const
{
	return Vector3D(0, 0, 0);
}
