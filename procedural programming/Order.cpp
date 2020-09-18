#include <iostream>

using namespace std;
void task2();



void order() {
	int N, i, k;
	k = 1;
	system("cls");
	cout << "Задача «Порядок»\n\n";
	cout << "Введите натуральное число 'N' = ";
	cin >> N;
	cout << "===================================\n";
	cout << "10 последовательных натуральных чисел в возрастающем порядке, начиная с " << N << ":\n\n";
	for (i = N; i < N + 10; i++) 	cout << i << " ";
	cout << "\n\n";
	system("pause");
	task2();
}
