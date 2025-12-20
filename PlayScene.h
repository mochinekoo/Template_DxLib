#pragma once
#include "SceneBase.h"

class PlayScene :
    public SceneBase {
private:
	std::string name = "PlayScene";
	int time = 0;
	bool isJumping = false;
public:
	PlayScene();
	~PlayScene();
	void Init() override;
	void Update() override;
	void Draw() override;
	std::string GetName() const override { return name; };
	bool GetIsJumping() const { return isJumping; };
	void SetIsJumping(bool isJumping_) { isJumping = isJumping_; };
};

