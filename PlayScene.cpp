#include "PlayScene.h"
#include "GameUtility.h"
#include "CircleDraw.h"
#include "SceneManager.h"
#include "application.h"

namespace {
	const int GROUND_Y = 600;
	const float GRAVITY = 0.5;
	const float JUMP_POWER = -15.0f;

	CircleDraw* obj = new CircleDraw(std::string("TitleCircle"), 30.0f, GetColor(255, 0, 0), Location(150.0f, 150.0f, 0.0f), Vector3D(0.0f, 0.0f, 0.0f));
	CircleDraw* obj2 = new CircleDraw(std::string("TitleCircle2"), 40.0f, GetColor(0, 255, 0), Location(550.0f, 350.0f, 0.0f), Vector3D(0.0f, 0.0f, 0.0f));
}

PlayScene::PlayScene() :
	time(0) {
	drawList.push_back(obj);
	drawList.push_back(obj2);
}

PlayScene::~PlayScene() {
}

void PlayScene::Init() {
	time = 0;
}

void PlayScene::Update() {
	time++;
	if (GameUtility::IsKeyDown(KEY_INPUT_P) && !isJumping) {
		Vector3D vec = obj2->GetVector();
		vec.SetY(JUMP_POWER);
		obj2->SetVector(vec);
		isJumping = true;
	}

	if (isJumping) {
		Vector3D vec = obj2->GetVector();
		Location pos = obj2->GetPostion();

		pos.SetY(pos.GetY() + vec.GetY()); 
		vec.SetY(vec.GetY() + GRAVITY);

		if (pos.GetY() >= GROUND_Y) {
			pos.SetY(GROUND_Y);
			vec.SetY(0);
			isJumping = false;
		}


		obj2->SetPostion(pos);
		obj2->SetVector(vec);
	}

	obj->SetPostion(Location(GetMouseLocation().GetX(), GetMouseLocation().GetY(),  0));

	if (obj->IsCircleCollision(*obj2)) {
		obj->SetColor(GetColor(0, 0, 255));
	}
	else {
		obj->SetColor(GetColor(255, 0, 0));
	}

	if (GameUtility::IsKeyDown(KEY_INPUT_SPACE)) {
		SceneManager::GetInstance().ChangeScene("TitleScene");
	}
}

void PlayScene::Draw() {
	for (auto drawObj : drawList) {
		drawObj->Draw();
	}

	GameUtility::DrawFix2DText(LEFT, 0, 0, 30, "titleシーン：　" + to_string(time), Color::WHITE, Color::BLACK);
	GameUtility::DrawFix2DText(LEFT, 0, 40, 30, "Circle同士の距離：" + to_string(obj->GetPostion().Distance(obj2->GetPostion())), Color::WHITE, Color::BLACK);
}
