#pragma once
#include "Vector3D.h"
#include <cmath>

namespace MathUtilty {

	const float PI = 3.1415926535f;

	//ベクトルの向きをラジアンで返す
	inline float Angle(const Vector3D& vec) {
		return std::atan2(vec.GetY(), vec.GetX());
	}

	//ラジアンから単位行列
	inline Vector3D FromAngle(float angle) {
		return Vector3D(std::cos(angle), std::sin(angle), 0.0f);
	}

	//内積
	inline float Dot(const Vector3D& a, const Vector3D& b) {
		return a.GetX() * b.GetX() + a.GetY() * b.GetY() + a.GetZ() * b.GetZ();
	}

	//外積
	inline float Cross(const Vector3D& a, const Vector3D& b) {
		return a.GetX() * b.GetY() - a.GetY() * b.GetX();
	}
}