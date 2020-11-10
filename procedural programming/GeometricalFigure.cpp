#include <iostream>

using namespace std;
void task4();
double CircleArea(double R);
double RectangleArea(double a, double b);
double TriangleArea(double h, double a);

void GeometricalFigure(){
	double RecA, RecB, TrianA, TrianH, CircR;
	system("cls");
	cout << "Задача «Геометрические фигуры». \nВычислить площади прямоугольника, треугольника, круга, используя подпрограммы - функции.\n\n";
	cout << "Введите значения для прямоугольника.\n";
	cout << "Высота a=";
	cin >> RecA;
	cout << "Ширина b=";
	cin >> RecB;
	cout << "Площадь прямоугольника ="<<RectangleArea(RecA,RecB)<< "\n\n";
	cout << "Введите значения для треугольника.\n";
	cout << "Высота H=";
	cin >> TrianH;
	cout << "Основание A=";
	cin >> TrianA;
	cout << "Площадь треугольника ="<< TriangleArea(TrianH, TrianA) << "\n\n";
	cout << "Введите значения для круга.\n";
	cout << "Радиус R=";
	cin >> CircR;
	cout << "Площадь круга =" << CircleArea(CircR) << "\n\n";
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