#pragma once
#include "SceneManager.h"
#include "Location.h"

namespace Screen {
	extern const int WIDTH;
	extern const int HEIGHT;
	extern const int COLORBIT;
	extern const int BACKCOLOR[3];
	extern const int FPS;
	extern const char* TITLE;
	extern int mouseX, mouseY;
}

inline Location GetMouseLocation() {
	return Location(Screen::mouseX, Screen::mouseY, 0);
}