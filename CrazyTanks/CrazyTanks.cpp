#include "stdafx.h"
#include"Display.h"
#include "GameController.h"
using namespace std;


int main()
{
	Display screen;
	

	//const int arSize = 40;
	//char pole[arSize][arSize] = {" "};
	//const int displaySize_x = screen.getDisplayHeght();
	//const int displaySize_y = screen.getDisplayWidth();

	SMALL_RECT minWindow[4] = { 0, 0, screen.windowSize.first, screen.windowSize.second };
	COORD maxWindow = { screen.windowSize.first + 1, (screen.windowSize.second + 1) };
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleWindowInfo(out_handle, true, minWindow);
	SetConsoleScreenBufferSize(out_handle, maxWindow);
	SetConsoleWindowInfo(out_handle, true, minWindow);

	
	auto controller = GameController();
    return 0;
}

