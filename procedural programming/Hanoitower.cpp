#include <iostream>

using namespace std;
void task6();
int getIntNumber();
void hanoi(int N, int from, int to, int buf);
int str, numberofmoves;

void hanoitower()
{
	int N;
	str = 0;
	numberofmoves = 0;
	system("cls");
	cout << "Задание «Ханойская башня»\n\n";
	cout << "Введите количество колец: ";
	N = getIntNumber();
	hanoi(N, 1, 3, 2);
	cout << endl << "Общее число перемещений - " << numberofmoves << endl << endl;
	system("pause");
	task6();
}

void hanoi(int N, int from, int to, int buf)
{
	if (N == 0) return;
	hanoi(N - 1, from, buf, to);
	if (str > 11)
	{
		cout << from << " => " << to << " | " << endl;
		str = 0;
	}
	else
	{
		cout << from << " => " << to << " | ";
		str++;
	}
	numberofmoves++;
	hanoi(N - 1, buf, to, from);
}

