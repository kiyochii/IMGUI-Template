

#include <iostream>
#include <Windows.h>
#include "ui.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    ui GUI;
    GUI.run();

    return 0; // Always return an int
}