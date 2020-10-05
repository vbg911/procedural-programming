#include <iostream>
#include <fstream>
#include <windows.graphics.h>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <wincon.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
void task4();
void sinusoid1();
void sinusoid2();
void get_number();
BOOL Line(HDC hdc, int x1, int y1, int x2, int y2);

void pick_sinusoid(){
	system("cls");
	cout << "Задача «Синусоида»\n\n";
	cout << "Напечатать график функции у = sin(x)\n";
	get_number();
}

void get_number()
{
	int number = 0;
	cout << "Введите номер способа (1 или 2) :";
	cin >> number;
	if (number == 1) {
		sinusoid1();
	}
	else if (number == 2) {
		sinusoid2();
	} else
	{
		cout << "Повторите ввод.";
		get_number();
	}
}

void sinusoid1()
{
	system("cls");


	int x = 25;		// Смещение синусоиды по горизонтали
	int y = 250;	// Смещение синусоиды по вертикали
	double x1, y1;
	

	HWND hWnd = GetConsoleWindow();
	HDC hDc = GetDC(hWnd);
	COLORREF color = RGB(255, 255, 255);
	HPEN pen = CreatePen(PS_SOLID, 1, color);
	SelectObject(hDc, pen);

	Line(hDc, 0, 250, 780, 250);				// Горизонтальная ось
	Line(hDc, 400, 130, 400, 380);				// Вертикальная ось

	color = RGB(0, 255, 0);     // Зеленый цвет
	for (x1 = 0; x1 < 37.7; x1 += 0.0001)	// Синусоида
	{
		y1 = sin(x1) * 100;
		SetPixel(hDc, x1 * 20 + x, y - y1, color);
	}
	ReleaseDC(hWnd, hDc);
	system("pause");
	task4();
}

BOOL Line(HDC hdc, int x1, int y1, int x2, int y2)
{
	MoveToEx(hdc, x1, y1, NULL);
	return LineTo(hdc, x2, y2);
}

void sinusoid2()
{
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(handle, &consoleInfo);
	int height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
	int width = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;

	auto GetX = [&](double x) { return int(x / 20 * width); };
	auto GetY = [&](double y) { return int((-y / 1 + 1) * (height / 2)); };

	_COORD c;
	for (double i = 0; i < 20; i += 0.05)
	{
		c.X = GetX(i);
		c.Y = GetY(sin(i));
		SetConsoleCursorPosition(handle, c);
		cout << '*';
	}
	CloseHandle(handle);
	system("pause");
	task4();
}