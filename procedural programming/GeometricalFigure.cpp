#include <iostream>

using namespace std;
void task4();
double CircleArea(double R);
double RectangleArea(double a, double b);
double TriangleArea(double h, double a);

void GeometricalFigure(){
	double RecA, RecB, TrianA, TrianH, CircR;
	cout << "������ ��������������� �������. \n��������� ������� ��������������, ������������, �����, ��������� ������������ - �������.\n\n";
	cout << "������� �������� ��� ��������������.\n";
	cout << "������ a=";
	cin >> RecA;
	cout << "������ b=";
	cin >> RecB;
	cout << "������ �������������� a=" << RecA << ", ������ b=" << RecB << "\n\n";
	cout << "������� �������� ��� ������������.\n";
	cout << "������ H=";
	cin >> TrianH;
	cout << "��������� A=";
	cin >> TrianA;
	cout << "������ ������������ H=" << TrianH << ", ��������� a=" << TrianA << "\n\n";
	cout << "������� �������� ��� �����.\n";
	cout << "������ R=";
	cin >> CircR;
	cout << "������ ����� R=" << CircR << "\n\n";
	cout << "������� �������������� =" << RectangleArea(RecA, RecB) << ", ������� ������������ =" << TriangleArea(TrianH, TrianA) << ", ������� ����� =" << CircleArea(CircR) << endl;
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