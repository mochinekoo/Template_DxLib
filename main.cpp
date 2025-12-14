#include "DxLib.h"
#include "application.h"
#include "SceneManager.h"
#include "GameUtility.h"

int initApplication();

namespace {
    SceneManager& sceneManager = SceneManager::GetInstance();
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    if (initApplication() != 0) {
        return -1;
    }

    while (true) {
        ClearDrawScreen();

        sceneManager.UpdateScene();
        sceneManager.DrawScene();
        GameUtility::UpdateKey();

        ScreenFlip();
        WaitTimer(1000 / Screen::FPS);
        if (ProcessMessage() == -1) {
            break;
        }
    }
}

int initApplication() {
    SetMainWindowText(Screen::TITLE);
    ChangeFontType(DX_FONTTYPE_ANTIALIASING_EDGE_16X16); //アンチエイリアシング＆エッジが使えるように
    ChangeWindowMode(true);
    SetGraphMode(Screen::WIDTH, Screen::HEIGHT, Screen::COLORBIT);
    if (DxLib_Init() == -1) {
        return -1;
    }

    SetBackgroundColor(Screen::BACKCOLOR[0], Screen::BACKCOLOR[1], Screen::BACKCOLOR[2]);
    SetDrawScreen(DX_SCREEN_BACK);

	sceneManager.ChangeScene("TitleScene");

    return 0;
}