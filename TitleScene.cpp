#include "TitleScene.h"
#include "GameUtility.h"

TitleScene::TitleScene() :
	time(0){
}

TitleScene::~TitleScene() {
}

void TitleScene::Init() {
	time = 0;
}

void TitleScene::Update() {
	time++;
}

void TitleScene::Draw() {
	GameUtility::DrawFix2DText(LEFT, 0, 0, 30, "タイトルシーン：　" + to_string(time), Color::WHITE, Color::BLACK);
}
