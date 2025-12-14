#include "TitleScene.h"
#include "GameUtility.h"
#include "CircleDraw.h"

TitleScene::TitleScene() :
	time(0){
}

TitleScene::~TitleScene() {
}

void TitleScene::Init() {
	time = 0;
	drawList.push_back(new CircleDraw(std::string("TitleCircle"), 30.0f, GetColor(255, 0, 0), Vector3D(0.0f, 0.0f, 0.0f), Vector3D(150.0f, 150.0f, 0.0f)));
}

void TitleScene::Update() {
	time++;
}

void TitleScene::Draw() {
	for (auto drawObj : drawList) {
		drawObj->Draw();
	}

	GameUtility::DrawFix2DText(LEFT, 0, 0, 30, "タイトルシーン：　" + to_string(time), Color::WHITE, Color::BLACK);
}
