#include <iostream>

using namespace std;
void task5();
void euclidean_alg(){
	system("cls");
	int num1, num2;
	cout << "Задача «Алгоритм Евклида».\n Найти (НОД) для целой пары чисел.\n\n";
	cout << "Введите 1 число пары :";
	cin >> num1;
	cout << "\nВведите 2 число пары :";
	cin >> num2;
	while (num1!=0||num2!=0){
		if (num1>num2){
			num1 = num1 % num2;
		} else{
			num2 = num2 % num1;
		}
	}
	cout <<"\n(НОД) ="<< num1 + num2;
	system("pause");
	task5();
}