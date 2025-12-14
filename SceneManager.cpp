#include "SceneManager.h"
#include "TitleScene.h"

SceneManager SceneManager::instance;

SceneManager::SceneManager() {
	currentScene = nullptr;
	sceneList.push_back(new TitleScene());
}

SceneManager::~SceneManager() {
	for (auto scene : sceneList) {
		delete scene;
	}
}

void SceneManager::ChangeScene(const std::string& name) {
	for (auto scene : sceneList) {
		if (scene->GetName()._Equal(name)) {
			currentScene = scene;
			currentScene->Init();
			break;
		}
	}
}

void SceneManager::InitScene() {
	if (currentScene != nullptr) {
		currentScene->Init();
	}
}

void SceneManager::UpdateScene() {
	if (currentScene != nullptr) {
		currentScene->Update();
	}
}

void SceneManager::DrawScene() {
	if (currentScene != nullptr) {
		currentScene->Draw();
	}
}
