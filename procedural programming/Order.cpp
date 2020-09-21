#include <iostream>

using namespace std;
void task2();
float getNumber();



void order() {
	int z, i, k;
	float N;
	k = 1;
	z = 0;
	system("cls");
	cout << "Задача «Порядок»\n\n";
	cout << "Введите натуральное число 'N' = ";
	N = getNumber();
	z = N;
	if (N <= 0) {
		cout << "\nЧисло N не является натуральным. Число N=1 \n";
		z = 1;
	}
	else if (N != z) {
		z = N + 1;
	}
	cout << "===================================\n";
	cout << "10 последовательных натуральных чисел в возрастающем порядке, начиная с " << z << ":\n\n";
	for (i = z; i < z + 10; i++) {
		cout << i << " ";
	}
	cout << "\n\n";
	system("pause");
	task2();
}
