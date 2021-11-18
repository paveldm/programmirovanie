#include <windows.h>
#include <conio.h>
#include <iostream>

void main()
{
    HWND hwnd;
    wchar_t Title[1024];
    GetConsoleTitle(Title, 1024);
    hwnd = FindWindow(NULL, Title);
    HDC hdc = GetDC(hwnd);
    for (double i = 0; i < 300; i += 0.1) {
        SetPixel(hdc, i * 5, sin(i) * 5 + 30, 250);
    }
    ReleaseDC(hwnd, hdc);
    _getch();
}