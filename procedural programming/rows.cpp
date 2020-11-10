// 1 задача
#include <fstream>
#include <iostream>
#include <string> 
using namespace std;
void task5();

void rows() {
	system("cls");
	cout << "Вычислить сумму 1/sin(1)+1/(sin(1) + sin(2)) + ... 1/(sin(1)+sin(n))+..." << endl;
	int n;
	float s = 0, ad = 0;
	cout << "Введите натуральное число n:";
	cin >> n;
	if (!n==0) {
	for (int i = 1; i <= n; i++) {
		ad += sin(i);
		s += 1 / ad;
	}
	cout << "y=" << s << endl;	
	} else {
		cout << "ноль не является натуральным числом" << endl;
	}
	
	system("pause");
	task5();
}