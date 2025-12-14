#pragma once
class Vector3D {
private:
	float x_;
	float y_;
	float z_;
public:
	Vector3D();
	Vector3D(float x, float y, float z);
	float GetX() const;
	float GetY() const;
	float GetZ() const;
	void Set(float x, float y, float z);
	float Length() const;
	float Distance(Vector3D& vector) const;

	//ˆÈ‰º‚ÍƒRƒs[‚ğ•Ô‚·ŠÖ”
	Vector3D Add(float x, float y, float z) const;
	Vector3D Subtract(float x, float y, float z) const;
	Vector3D Multiply(float scalar) const;
	Vector3D Normalize() const;
	Vector3D Zero() const;

};

