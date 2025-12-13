#pragma once
#include <vector>
#include "SceneBase.h"

class SceneManager {
private:
	std::vector<SceneBase*> sceneList;
	SceneBase* currentScene = nullptr;
public:
	SceneManager();
	~SceneManager();
	void ChangeScene(const std::string& name);
	void InitScene();
	void UpdateScene();
	void DrawScene();
};