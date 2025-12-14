#pragma once
#include "SceneBase.h"

class PlayScene :
    public SceneBase {
private:
	std::string name = "PlayScene";
	int time = 0;
public:
	PlayScene();
	~PlayScene();
	void Init() override;
	void Update() override;
	void Draw() override;
	std::string GetName() const override { return name; };
};

