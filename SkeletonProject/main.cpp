#include<DxLib.h>
#include<iostream>

using namespace std;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	DxLib::SetGraphMode(1280, 720, 32);
	DxLib::ChangeWindowMode(true);
	DxLib::SetWindowText(L"1916030_’†Œ´‰pŠì");
	if (DxLib_Init()) {
		return -1;
	}
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (DxLib::ProcessMessage() == 0) {
		DxLib::ScreenFlip();
	}
	return 0;
}