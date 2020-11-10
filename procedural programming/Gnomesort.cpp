#include <iostream>
using namespace std;
int n;
void task5();
void Gnome_sort(int i, int j, int* mas);

void gonm_sort()
{
	system("cls");
	cout << "Демонстрация алгоритма 'Гномья сортировка'" << endl;
	int m, k;
	cout << "Размер массива  ";
	cin >> n;
	int* a = new int[n];
	for (k = 0; k < n; k++) //ввод массива
	{
		cout << k + 1 << " элемент > "<<endl;
		cin >> a[k];
	}
	k = 1; m = 2;
	Gnome_sort(k, m, a); //вызов функции сортировки
	delete[]a;
	cout << endl;
	system("pause");
	task5();
}

void Gnome_sort(int i, int j, int* mas) {
	while (i < n)
	{
		if (mas[i - 1] <= mas[i]) { i = j; j++; }
		else
		{
			int t = mas[i];
			mas[i] = mas[i - 1]; mas[i - 1] = t;
			i--;
			if (i == 0) { i = j; j++; }
		}
	}
	cout << "Отсортированный массив : ";
	for (i = 0; i < n; i++) //вывод массива
		cout << mas[i] << " ";
}