#include <iostream>

using namespace std;
void task4();
void rand(int m, int i, int c, int x0);

void random_generator() {
	int m, i, c, x0;
	cout << "Задача «Генератор случайных чисел».\n Построить генератор псевдослучайных чисел по формуле\n";
	cout << "Введите число m=";
	cin >> m;
	cout << "\nВведите число i=";
	cin >> i;
	cout << "\nВведите число c=";
	cin >> c;
	cout << "\nВведите начальное значение x0=";
	cin >> x0;
	rand(m, i, c, x0);
	system("pause");
	task4();
}


void rand(int m, int i, int c, int x0) {
	cout << "\n\n";
	int* random = new int[i];
	random[0] = x0;
	for (int count = 0; count < i; count++) {
		random[count + 1] = ((m * random[count]+i) % c);
	}
	cout << "массив рандомных чисел = ";
	for (int count = 0; count < i; count++) {
		cout <<"номер элемента ="<<count<<" элемент ="<< random[count] << "\n";
	}
	cout << "\n";
}