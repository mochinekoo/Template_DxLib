#pragma once
#include "SceneManager.h"

namespace Screen {
	const int WIDTH = 1280;
	const int HEIGHT = 720;
	const int COLORBIT = 32;
	const int BACKCOLOR[3] = {0, 0, 0};
	const int FPS = 60;
	const char* TITLE = "GameTemplate";
}

inline SceneManager& GetSceneManager() {
	static SceneManager sceneManager;
	return sceneManager;
}