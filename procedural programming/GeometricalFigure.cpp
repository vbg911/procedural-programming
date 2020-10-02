#include <iostream>

using namespace std;
void task4();
double CircleArea(double R);
double RectangleArea(double a, double b);
double TriangleArea(double h, double a);

void GeometricalFigure(){
	double RecA, RecB, TrianA, TrianH, CircR;
	cout << "Задача «Геометрические фигуры». \nВычислить площади прямоугольника, треугольника, круга, используя подпрограммы - функции.\n\n";
	cout << "Введите значения для прямоугольника.\n";
	cout << "Высота a=";
	cin >> RecA;
	cout << "Ширина b=";
	cin >> RecB;
	cout << "Высота прямоугольника a=" << RecA << ", ширина b=" << RecB << "\n\n";
	cout << "Введите значения для триугольника.\n";
	cout << "Высота H=";
	cin >> TrianH;
	cout << "Основание A=";
	cin >> TrianA;
	cout << "Высота триугольника H=" << TrianH << ", основание a=" << TrianA << "\n\n";
	cout << "Введите значения для круга.\n";
	cout << "Радиус R=";
	cin >> CircR;
	cout << "Радиус круга R=" << CircR << "\n\n";
	cout << "Площадь прямоугольника =" << RectangleArea(RecA, RecB) << ", площадь триугольника =" << TriangleArea(TrianH, TrianA) << ", Площадь круга =" << CircleArea(CircR) << endl;
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