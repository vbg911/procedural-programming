#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
void task4();
float getNumber();

void matrix()
{
	int i, j, k, maxseller, minseller;
	float max, min;
	float tableA[3][4] =
	{
		{ 5, 2, 0, 10 },
		{ 3, 5, 2, 5 },
		{ 20, 0, 0 }
	};
	float tableB[4][2] =
	{
		{ 1.2, 0.5 },
		{ 2.8, 0.4 },
		{ 5, 1 },
		{ 2, 1.5}
	};
	float tableC[3][2] = { 0 };
	char ch;

	system("cls");
	cout << "Задача «Умножение матриц»\n\n\n";

	cout << "Использовать значения таблиц по умолчанию? (Y/N) ";
	cin >> ch;
	ch = toupper(ch);
	if (ch != 'Y')
	{
		cout << "Таблица A (Количество проданного товара)\n";
		for (i = 0; i < 3; i++)
		{
			cout << i + 1 << "-й продавец\n";
			for (j = 0; j < 4; j++)
			{
				cout << "     " << j + 1 << "-й товар ";
				tableA[i][j] = getNumber();
			}
		}
		cout << endl;
		cout << "Таблица B (цена каждого товара и комиссионные, полученные от продажи)\n";
		for (i = 0; i < 4; i++)
		{
			cout << i + 1 << "-й товар\n";
			cout << "     Цена товара ";
			tableB[i][0] = getNumber();
			cout << "     Комиссионные ";
			tableB[i][1] = getNumber();
		}
		cout << endl;
	}


	// умножение матриц
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 4; k++)
			{
				tableC[i][j] = tableC[i][j] + tableA[i][k] * tableB[k][j];
			}
		}
	}

	//// вывод матриц на экран
	//cout << "\n";						//Таблица A
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		cout << tableA[i][j] << "  ";
	//	}
	//	cout << "\n";
	//}

	//cout << "\n";						//Таблица B
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		cout << tableB[i][j] << "  ";
	//	}
	//	cout << "\n";
	//}

	//cout << "\n";						//Таблица C
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		cout << tableC[i][j] << "  ";
	//	}
	//	cout << "\n";
	//}

	cout << "\n";

	// какой продавец выручил больше всего денег с продажи, а какой меньше всего
	if (tableC[0][0] > tableC[1][0])
	{
		max = tableC[0][0];
		min = tableC[1][0];
		maxseller = 1;
		minseller = 2;
	}
	else
	{
		max = tableC[1][0];
		min = tableC[0][0];
		maxseller = 2;
		minseller = 1;
	}
	if (tableC[2][0] > max)
	{
		maxseller = 3;
	}
	else
	{
		if (tableC[2][0] < min)
		{
			minseller = 3;
		}
	}
	cout << maxseller << "-й продавец выручил больше всего денег с продаж, а " << minseller << "-й продавец выручил меньше всего денег с продаж\n\n";


	// какой продавец получил большие комиссионные, а какой меньшие
	if (tableC[0][1] > tableC[1][1])
	{
		max = tableC[0][1];
		min = tableC[1][1];
		maxseller = 1;
		minseller = 2;
	}
	else
	{
		max = tableC[1][1];
		min = tableC[0][1];
		maxseller = 2;
		minseller = 1;
	}
	if (tableC[2][1] > max)
	{
		maxseller = 3;
	}
	else
	{
		if (tableC[2][1] < min)
		{
			minseller = 3;
		}
	}
	cout << maxseller << "-й продавец получил наибольшие комиссионные, а " << minseller << "-й продавец получил наименьшие комиссионные\n\n";

	cout << "Общая сумма денег, вырученных за проданные товары " << tableC[0][0] + tableC[1][0] + tableC[2][0] << "\n\n";
	cout << "Всего комиссионных получили продавцы " << tableC[0][1] + tableC[1][1] + tableC[2][1] << "\n\n";
	cout << "Общая сумма денег, прошедших через руки продавцов " << tableC[0][0] + tableC[1][0] + tableC[2][0] + tableC[0][1] + tableC[1][1] + tableC[2][1] << "\n\n\n";

	system("pause");
	task4();
}