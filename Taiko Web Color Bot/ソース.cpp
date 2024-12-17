#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleTitleA("Taiko Web Color Bot");

	HDC hdc = GetDC(NULL);
	POINT MousePos = { NULL };
	while (true)
	{
		GetCursorPos(&MousePos);
		COLORREF Color = GetPixel(hdc, MousePos.x, MousePos.y);

		int R = (int)GetRValue(Color);
		int G = (int)GetGValue(Color);
		int B = (int)GetBValue(Color);
		if (R == 243 && G == 71 && B == 40)
		{
			keybd_event('F', NULL, NULL, NULL);
			keybd_event('F', NULL, KEYEVENTF_KEYUP, NULL);
		}
		else if (R == 101 && G == 189 && B == 187)
		{
			keybd_event('D', NULL, NULL, NULL);
			keybd_event('D', NULL, KEYEVENTF_KEYUP, NULL);
		}
		else if (R == 243 && G == 181 && B == 0)
		{
			keybd_event('F', NULL, NULL, NULL);
			keybd_event('F', NULL, KEYEVENTF_KEYUP, NULL);
		}
		printf("%d, %d, %d\n", R, G, B);
		Sleep(10);
	}
	ReleaseDC(NULL, hdc);
	std::getchar();
}