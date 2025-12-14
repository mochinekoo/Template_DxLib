#pragma once
#include <string>
#include <DxLib.h>

using namespace std;

namespace KeyInput {
	const int KEYCOUNT = 256;
	char beforeKeyBuf[KEYCOUNT] = {};
	char afterKeyBuf[KEYCOUNT] = {};

	char fixDownKeyBuf[KEYCOUNT] = {};
	char fixUpKeyBuf[KEYCOUNT] = {};
}

enum DrawType {
	LEFT,
	CENTER,
	RIGHT
};

namespace Color {
	const unsigned int WHITE = GetColor(255, 255, 255);
	const unsigned int BLACK = GetColor(0, 0, 0);
}

class GameUtility {
public:
	static void DrawFix2DText(DrawType type, int x, int y, int size, string text, unsigned int textColor, unsigned int edgeColor);

	static void UpdateKey();
	static bool IsKeyDown(int keyCode);
	static bool IsKeyUp(int keyCode);
};

