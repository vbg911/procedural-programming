#include <iostream>
#include <algorithm>

using namespace std;
void task5();
float getNumber();

void globs() {
	int i, num, count = 1, count1 = 0;
	int glob[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	system("cls");
	cout << "Задача «Шарики»\n\n";
	cout << "Введите количество шариков (не больше 10-ти) = ";
	num = getNumber();
	for (i = 1; i <= num; i++)
	{
		count = count * i;
	}

	do
	{
		//		cout << glob[0] << ' ' << glob[1] << ' ' << glob[2] << "        " << count1 << '\n';
		for (i = 0; i < num; i++)
		{
			if (i + 1 == glob[i])
			{
				count1 = count1++;
				break;
			}
		}
		//			cout << glob[0] << ' ' << glob[1] << ' ' << glob[2] << "        " << count1 << '\n';
		//			cout << glob[0] << ' ' << glob[1] << ' ' << glob[2] << ' ' << glob[3] << ' ' << glob[4] << ' ' << glob[5] << ' ' << glob[6] << ' ' << glob[7] << ' ' << glob[8] << ' ' << glob[9] << '\n';
	} while (next_permutation(glob, glob + num));

	cout << "\n=========================\n";
	cout << "Общее количество подходящих перестановок: "<<count1;
	cout << "\n\n\n";
	system("pause");
	task5()
	;
}