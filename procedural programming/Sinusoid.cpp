#include <iostream>
#include <fstream>
#include <windows.graphics.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <wincon.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
void task4();
BOOL Line(HDC hdc, int x1, int y1, int x2, int y2);
void sinusoid()
{
	system("cls");
	cout << "������ ����������\n\n";
	cout << "���������� ������ ������� � = sin(x)";

	int x = 25;		// �������� ��������� �� �����������
	int y = 250;	// �������� ��������� �� ���������
	double x1, y1;
	int i;

	HWND hWnd = GetConsoleWindow();
	HDC hDc = GetDC(hWnd);
	COLORREF color = RGB(255, 255, 255);
	HPEN pen = CreatePen(PS_SOLID, 1, color);
	SelectObject(hDc, pen);

	Line(hDc, 0, 250, 780, 250);				// �������������� ���
	Line(hDc, 400, 130, 400, 380);				// ������������ ���

	color = RGB(0, 255, 0);     // ������� ����
	for (x1 = 0; x1 < 37.7; x1 += 0.0001)														// ���������
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