#include <iostream>

using namespace std;
void test();
float getNumber();

void railway() {
	int i, j, N, num, tempcompartment = 0, freecompartment = 0, plan[9][7] = { 0 };
	int seats[2][54]
	{
		{0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,8,8,7,7,6,6,5,5,4,4,3,3,2,2,1,1,0,0},
		{0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,4,5,4,5,4,5,4,5,4,5,4,5,4,5,4,5,4,5}
	};
	system("cls");
	cout << "Задача «Плацкартный вагон»\n\n";
	cout << "Определить, какое наибольшее число подряд идущих купе полностью свободны\n\n";
	cout << "Введите общее количество свободных мест N = ";
	N = getNumber();
	cout << "Введите номера свободных мест:\n";
	for (i = 0; i < N; i++)
	{
		cout << i + 1 << ") ";
		num = getNumber() - 1;
		if (num > 54)
		{
			cout << "Введен номер несуществующего места";
		}
		else
		{
			int k = seats[0][num];
			int l = seats[1][num];
			plan[k][l] = 1;
			plan[k][6] = plan[k][6] + 1;
		}
	}

	cout << "\n=========================\n";
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 7; j++)
		{
			cout << plan[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < 9; i++)
	{
		if (plan[i][6] == 6)
		{
			tempcompartment = tempcompartment + 1;
		}
		else
		{
			if (tempcompartment > freecompartment)
			{
				freecompartment = tempcompartment;
			}
			tempcompartment = 0;
		}
	}
	cout << "Число подряд идущих купе полностью свободных - " << freecompartment << endl;


	cout << "\n\n\n";
	system("pause");
	test();
}