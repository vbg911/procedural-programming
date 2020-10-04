#include <iostream>

using namespace std;
void task4();
double CircleArea(double R);
double RectangleArea(double a, double b);
double TriangleArea(double h, double a);

void GeometricalFigure(){
	double RecA, RecB, TrianA, TrianH, CircR;
	system("cls");
	cout << "������ ��������������� �������. \n��������� ������� ��������������, ������������, �����, ��������� ������������ - �������.\n\n";
	cout << "������� �������� ��� ��������������.\n";
	cout << "������ a=";
	cin >> RecA;
	cout << "������ b=";
	cin >> RecB;
	cout << "������� �������������� ="<<RectangleArea(RecA,RecB)<< "\n\n";
	cout << "������� �������� ��� ������������.\n";
	cout << "������ H=";
	cin >> TrianH;
	cout << "��������� A=";
	cin >> TrianA;
	cout << "������� ������������ ="<< TriangleArea(TrianH, TrianA) << "\n\n";
	cout << "������� �������� ��� �����.\n";
	cout << "������ R=";
	cin >> CircR;
	cout << "������� ����� =" << CircleArea(CircR) << "\n\n";
	system("pause");
	task4();
}

double CircleArea(double R){
	return 3.14 * R * R;
}

double RectangleArea(double a, double b){
	return a * b;
}

double TriangleArea(double h, double a){
	return 0.5*(h*a);
}