#include <iostream>

using namespace std;
void task4();
string sign();

void NumberSign() {
	system("cls");
	cout << "Задача «Знак числа».\n Определить знак введенного с клавиатуры числа, использовав подпрограмму функцию \n\n";
	cout << sign();
	system("pause");
	task4();
}

string sign() {
	double num;
	string output;
	cout << "Введите число: ";
	cin >> num;
	if (num > 0) {
		output = "Число положительное.\n";
		return output;
	}
	else if (num < 0) {
		output = "Число отрицательное.\n";
		return output;
	}
	else {
		output = "число равно нулю.\n";
		return output;
	}

}