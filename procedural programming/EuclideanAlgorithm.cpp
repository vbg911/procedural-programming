#include <iostream>

using namespace std;
void task5();
void euclidean_alg(){
	system("cls");
	int num1, num2;
	cout << "������ ��������� �������.\n ����� (���) ��� ����� ���� �����.\n\n";
	cout << "������� 1 ����� ���� :";
	cin >> num1;
	cout << "\n������� 2 ����� ���� :";
	cin >> num2;
	while (num1!=0||num2!=0){
		if (num1>num2){
			num1 = num1 % num2;
		} else{
			num2 = num2 % num1;
		}
	}
	cout <<"\n(���) ="<< num1 + num2;
	system("pause");
	task5();
}