#pragma once
#include "SceneBase.h"

class TitleScene : public SceneBase {
private:
	std::string name = "TitleScene";
	int time = 0;
public:
	TitleScene();
	~TitleScene();
	void Init() override;
	void Update() override;
	void Draw() override;
	std::string GetName() const override { return name; };
};