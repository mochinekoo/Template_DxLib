#pragma once
#include <string>
#include <vector>
#include "DrawBase.h"

class SceneBase {
protected:
	std::vector<DrawBase*> drawList;
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

