#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
void task4();

void recognizer()
{
	int i, max, summa, previousch, digit[8] = { 1, 5, 10, 50, 100, 500, 1000, 0 };
	char ch;

	system("cls");
	cout << "Задача «Автоматный распознаватель»\n\n";
	cout << "Декодировать римскую запись числа, состоящего из любого количества знаков. \n\n";
	cout << "Введите римскую запись числа = ";
	i = 0;
	summa = 0;
	previousch = 2000;
	do
	{
		ch = _getch();
		ch = toupper(ch);
		cout << ch;
		switch (ch)
		{
		case 73:	// I
			if (previousch < digit[0]) summa = summa + digit[0] - 2 * previousch;
			else summa = summa + digit[0];
			previousch = digit[0];
			break;
		case 86:	// V
			if (previousch < digit[1]) summa = summa + digit[1] - 2 * previousch;
			else summa = summa + digit[1];
			previousch = digit[1];
			break;
		case 88:	// X
			if (previousch < digit[2]) summa = summa + digit[2] - 2 * previousch;
			else summa = summa + digit[2];
			previousch = digit[2];
			break;
		case 76:	// L
			if (previousch < digit[3]) summa = summa + digit[3] - 2 * previousch;
			else summa = summa + digit[3];
			previousch = digit[3];
			break;
		case 67:	// C
			if (previousch < digit[4]) summa = summa + digit[4] - 2 * previousch;
			else summa = summa + digit[4];
			previousch = digit[4];
			break;
		case 68:	// D
			if (previousch < digit[5]) summa = summa + digit[5] - 2 * previousch;
			else summa = summa + digit[5];
			previousch = digit[5];
			break;
		case 77:	// M
			if (previousch < digit[6]) summa = summa + digit[6] - 2 * previousch;
			else summa = summa + digit[6];
			previousch = digit[6];
			break;
		default:
			cout << "Введен неверный символ\n";
			break;
		}
		i++;
	} while (ch != 13);											// пока не нажата ENTER
	cout << "\nАрабская запись числа " << summa << "\n";
	system("pause");
	task4();
}