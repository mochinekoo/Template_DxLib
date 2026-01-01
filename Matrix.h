#pragma once
#include <cmath>
#include "Vector3D.h"

class Matrix2D {
public:
	float mat00, mat01, tx;
	float mat10, mat11, ty;
	//0 0 1

	Matrix2D(float m00, float m01, float tx,
			float m10, float m11, float ty) :
		mat00(m00), mat01(m01), tx(tx),
		mat10(m10), mat11(m11), ty(ty) {
	}

	static Matrix2D Identity();
	static Matrix2D Translation(const Vector3D& vec);
	static Matrix2D Scaling(const Vector3D& vec);
	static Matrix2D Rotation(float angle);
	static Matrix2D Multiply(const Matrix2D& a, const Matrix2D& b);
	static Vector3D Transform(const Matrix2D& mat, const Vector3D& vec);


};

