#include <iostream>

using namespace std;
void task4();
void translate(string originalnum, int originalsystem, int newsystem);
int to_dec(string originalnum, int originalsystem);
string dec_to_diff(int decnum, int newsystem);

void number_system(){
	string originalnum;
	int originalsystem, newsystem;
	system("cls");
	cout << "Задача «Системы счисления».\n считать число с клавиатуры и перевести его в любую другую.\n";
	cout << "Введите исходное число :";
	cin >> originalnum;
	cout << "Введите систему счисления исходного число :";
	cin >> originalsystem;
	cout << "Введите желаемую систему счисления :";
	cin >> originalnum;
	translate(originalnum, originalsystem, newsystem);
}

void translate(string originalnum, int originalsystem, int newsystem){
	int decnum = to_dec(originalnum, originalsystem);
	cout << "Число "<<originalnum<< " в "<<originalsystem<<" системе счисления =" << decnum <<" в десятичной системе счисления"<< endl;
	string diffnum = dec_to_diff(decnum, newsystem);
	cout << "Число " << originalnum << " в " << originalsystem << " системе счисления =" << diffnum << " в " << newsystem << " системе счисления" << endl;
}

int to_dec(string originalnum,int originalsystem){
	int i, n, sum;
	sum = 0;
	
}

string dec_to_diff(int decnum, int newsystem){
	
}