#include "PlayScene.h"
#include "GameUtility.h"
#include "CircleDraw.h"
#include "SceneManager.h"

PlayScene::PlayScene() :
	time(0) {
	drawList.push_back(new CircleDraw(std::string("TitleCircle"), 30.0f, GetColor(255, 0, 0), Location(150.0f, 150.0f, 0.0f), Vector3D(0.0f, 0.0f, 0.0f)));
}

PlayScene::~PlayScene() {
}

void PlayScene::Init() {
	time = 0;
}

void PlayScene::Update() {
	time++;

	if (GameUtility::IsKeyDown(KEY_INPUT_SPACE)) {
		SceneManager::GetInstance().ChangeScene("TitleScene");
	}
}

void PlayScene::Draw() {
	for (auto drawObj : drawList) {
		drawObj->Draw();
	}

	GameUtility::DrawFix2DText(LEFT, 0, 0, 30, "titleシーン：　" + to_string(time), Color::WHITE, Color::BLACK);
}
