#pragma once
#include <string>

class SceneBase {
private:
	std::string name;
public:
	SceneBase();
	~SceneBase();
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual std::string GetName() const { return name; };
};

