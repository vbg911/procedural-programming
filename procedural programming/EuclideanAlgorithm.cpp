#include <iostream>

using namespace std;
void task5();
int nod(int a, int b);

void euclidean_alg(){
	system("cls");
	int num1, num2;
	cout << "Задача «Алгоритм Евклида».\n Найти (НОД) для целой пары чисел.\n\n";
	cout << "Введите 1 число пары :";
	cin >> num1;
	cout << "\nВведите 2 число пары :";
	cin >> num2;
	cout <<"\n(НОД) ="<<nod(num1,num2)<<endl;
	system("pause");
	task5();
}

int nod(int a, int b) {
	int c;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return abs(a);
}