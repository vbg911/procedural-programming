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
	cout << "������ �������� ����������.\n ������� ����� � ���������� � ��������� ��� � ����� ������.\n";
	cout << "������� �������� ����� :";
	cin >> originalnum;
	cout << "������� ������� ��������� ��������� ����� :";
	cin >> originalsystem;
	cout << "������� �������� ������� ��������� :";
	cin >> originalnum;
	translate(originalnum, originalsystem, newsystem);
}

void translate(string originalnum, int originalsystem, int newsystem){
	int decnum = to_dec(originalnum, originalsystem);
	cout << "����� "<<originalnum<< " � "<<originalsystem<<" ������� ��������� =" << decnum <<" � ���������� ������� ���������"<< endl;
	string diffnum = dec_to_diff(decnum, newsystem);
	cout << "����� " << originalnum << " � " << originalsystem << " ������� ��������� =" << diffnum << " � " << newsystem << " ������� ���������" << endl;
}

int to_dec(string originalnum,int originalsystem){
	int i, n, sum;
	sum = 0;
	
}

string dec_to_diff(int decnum, int newsystem){
	
}