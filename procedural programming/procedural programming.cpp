#include <iostream>
#include <string>
#include <cmath>
const double PI = 3.141592653589793;

using namespace std;

void name();
void arithmetic();
void equation();
void anotherEquation();
void lampWithCurtain();
void printEquation(float a, float b, float c);
void cone();
void branching();
void function();
void order();
void tab();
void loan();

int main()
{
	setlocale(LC_ALL, "Russian");
	string tasks[24] = { "1) «Имя» +", "2) «Арифметика» +", "3) «Уравнение»  +","4) «Еще уравнение»  +", "5) «Лампа со шторой» +", "6) «Конус» +", "7) «Разветвление» +"
		,"8) «Функция» +" ,"9) «Порядок» +" ,"10) «Табуляция» +" ,"11) «Заем»" ,"12) «Ссуда»" ,"13) «Копирование файла»" ,"14) «Фильтр»" ,"15)  «Сортировка букв»"
		,"16) «Файл»","17) «Знак числа»" ,"18) «Геометрические фигуры»" ,"19) «Былая слава»" ,"20) «Синусоида»" ,"21) «Автоматный распознаватель»"
		,"22) «Генератор случайных чисел»", "23) «Умножение матриц»" ,"24) «Системы счисления»" };
	int number;
	cout << "Выберите номер задачи. Знаком '+' отмечены выполненные задания.\n";
	for (int i = 0; i <24; i++)
	{
		cout << tasks[i] << ::endl;
	}
	cin >> number;
	switch (number)
	{
	case 1: 
		cout << "Выбрана задача «Имя».\n";
		name();
		break;
	case 2: 
		cout << "Выбрана задача «Арифметика».\n";
		arithmetic();
		break;
	case 3: 
		cout << "Выбрана задача «Уравнение».\n";
		equation();
		break;
	case 4: 
		cout << "Выбрана задача «Еще уравнение».\n";
		anotherEquation();
		break;
	case 5: 
		cout << "Выбрана задача «Лампа со шторой».\n";
		lampWithCurtain();
		break;
	case 6: 
		cout << "Выбрана задача «Конус».\n";
		cone();
		break;
	case 7: 
		cout << "Выбрана задача «Разветвление».\n";
		branching();
		break;
	case 8: 
		cout << "Выбрана задача «Функция».\n";
		function();
		break;
	case 9: 
		cout << "Выбрана задача «Порядок».\n";
		order();
		break;
	case 10: 
		cout << "Выбрана задача «Табуляция».\n";
		tab();
		break;
	case 11: 
		cout << "Выбрана задача «Заем».\n";
		loan();
		break;
	case 12: 
		cout << "Выбрана задача «Ссуда».\n";
		break;
	case 13: 
		cout << "Выбрана задача «Копирование файла».\n";
		break;
	case 14: 
		cout << "Выбрана задача «Фильтр».\n";
		break;
	case 15: 
		cout << "Выбрана задача «Сортировка букв».\n";
		break;
	case 16: 
		cout << "Выбрана задача  «Файл».\n";
		break;
	case 17: 
		cout << "Выбрана задача «Знак числа».\n";
		break;
	case 18: 
		cout << "Выбрана задача «Геометрические фигуры».\n";
		break;
	case 19: 
		cout << "Выбрана задача «Былая слава».\n";
		break;
	case 20: 
		cout << "Выбрана задача «Синусоида».\n";
		break;
	case 21: 
		cout << "Выбрана задача «Автоматный распознаватель».\n";
		break;
	case 22: 
		cout << "Выбрана задача «Генератор случайных чисел».\n";
		break;
	case 23:
		cout << "Выбрана задача Умножение матриц».\n";
		break;
	case 24:
		cout << "Выбрана задача «Системы счисления».\n";
		break;
	default:
		cout << "Выберите число от 1 до 22!\n";
		break;
	}
}

// 1 задача
void name() {                 
	cout << "Валерий\n";
	return;
}

// 2 задача
void arithmetic() {  
	float num1,num2;
	cout.precision(3);
	cout << "Введите два числа через пробел.\n";
	cin >> num1 >> num2;
	cout << "Введенное число a=" << fixed<< num1 << " Введенное число b=" << fixed << num2 << endl;
	cout << "Сумма чисел= " << num1 + num2 << endl;
	cout << "Разность чисел= " << num1 - num2 << endl;
	cout << "Произведение чисел= " << num1 * num2 << endl;
	if (num2 == 0) {
		cout << "Выполнить деление невозможно. Второе число равно ="<<num2 << endl;
	}
	else
	{
		cout << "Частное чисел= " << num1 / num2 << endl;
	}
	return;
}

// 3 задача
void equation() {
	float  b, c, x;
	cout.precision(3);
	cout << "Введите два числа через пробел.\n";
	cin >> b>> c;
	cout << " Введенное число b=" << fixed << b << " Введенное число c=" << fixed << c << endl;
	if (c < 0) {
		cout << fixed << b << "x" << fixed << c << "=0" << endl;
	}
	else {
		cout << fixed << b << "x+" << fixed << c << "=0" << endl;
	}
	
	if (c == 0) {
		cout << "Выполнить деление невозможно. Второе число равно =" << c << endl;
	}
	else
	{
		x = -c / b;
	cout << "единственный корень =" << x << "." << endl;
	}
}

// 4 задача
void anotherEquation() {
	float disc, a, b, c, x;
	cout.precision(3);
	cout << "Введите три числа через пробел.\n";
	cin >> a >> b >> c;
	cout << "Введенное число a=" << fixed << a << " Введенное число b=" << fixed << b << " Введенное число c=" << fixed << c << endl;
	printEquation(a, b, c);
	disc = b * b - 4 * a * c;
	cout << disc << endl;
	if (disc >= 0) { 
		x = (-1 * b + sqrt(disc)) / 2 * a;
		cout << "первый корень =" << x << "." << endl;
		x = (-1 * b - sqrt(disc)) / 2 * a;
		cout << "второй корень =" << x << "." << endl;
	}
	else if (disc == 0) {
		x = -b / 2 * a;
		cout << "единственный корень =" << x << "." << endl;
	}
	else
	{
		cout << "Это уравнение не имеет корней" << endl;
	}
}

// вывод квадратного уравнения на экран используется в 4 задаче.
void printEquation(float a, float b, float c) {
	if (b < 0 && c < 0) {
		cout << fixed << a << "x^2" << fixed << b << "x" << fixed << c << "=0" << endl;
	}else if (b<0){
		cout << fixed << a << "x^2" << fixed << b << "x+" << fixed << c << "=0" << endl;
	}
	else if(c<0){
		cout << fixed << a << "x^2+" << fixed << b << "x" << fixed << c << "=0" << endl;
	}else {
		cout << fixed << a << "x^2+" << fixed << b << "x+" << fixed << c << "=0" << endl;
	}
}

// 5 задача
void lampWithCurtain() {
	string isDay, isCurtainOpen, isLampOn;
	bool day, curtain, lamp;
	cout << "На улице день? Шторы отктрыты? Лампа включена?\n";
	cout << "Введите true/false 3 раза через пробел.\n";
	cin >> isDay >> isCurtainOpen >> isLampOn;
	if (isDay == "true") {
		day = true;
	}else if (isDay == "false") {
		day = false;
	}
	else
	{
		cout << "Время суток не распознано. По умолчарию будет использовано значение 'false'.\n";
		day = false;
	}

	if (isCurtainOpen == "true") {
		curtain = true;
	}
	else if (isCurtainOpen == "false") {
		curtain = false;
	}
	else
	{
		cout << "Состояние штор не распознано. По умолчарию будет использовано значение 'false'.\n";
		curtain = false;
	}

	if (isLampOn == "true") {
		lamp = true;
	}
	else if (isLampOn == "false") {
		lamp = false;
	}
	else
	{
		cout << "Состояние лампы не распознано. По умолчарию будет использовано значение 'false'.\n";
		lamp = false;
	}

	cout << "На улице день? " << boolalpha<< day <<"\n"<< "Шторы открыты? " << boolalpha << curtain <<"\n"<< "Лампа включена? " << boolalpha << lamp<<endl;
	if (day && curtain) {
		cout << "В команате светло!" << endl;
	} else if (lamp){
		cout << "В команате светло!" << endl;
	} else {
		cout << "В команате темно!" << endl;
	}
		
	}

// 6 ззадача
void cone() {
	double h, R1, R2, l, V, S;
	cout.precision(3);
	cout << "Введите через пробел высоту усеченного конуса, радиус верхнего основания, радиус нижнего основания, образующую усеченного конуса.\n";
	cin >> h >> R1 >> R2 >> l;
	cout << "Высота конуса =" << fixed << h << " радиус верхнего основания =" << fixed << R1 << " радиус нижнего основания =" << fixed << R2 << " образующая усеченного конуса =" << fixed << l << endl;
	V = 0.333333333333333 * PI * h * (R1 * R1 + R1 * R2 + R2 * R2);
	S = PI * (l * R2 + l * R1 + R2 * R2 + R1 * R1);
	cout << "Объем усеченного конуса V=" << fixed << V <<"\n"<< "Площадь полной поверхности усеченного конуса S=" << S << endl;
}

// 7 задача
void branching() {
	double a, x, w;
	cout.precision(3);
	cout << "Введите через пробел произвольные значение для 'a' и 'x'.\n";
	cin >> a >> x;
	cout << "Значение 'a'=" << fixed << a <<"\n" << "Значение 'x'=" << fixed << x << endl;
	if (abs(x) < 1) {
		if (x == 0) {
			cout << "|x|<1 Значение 'w' равно бесконечности." << endl;
		} else{
			w = a * log(abs(x));
			cout << "|x|<1 Значение 'w'=" << fixed << w << endl;
		}		
	} else if (abs(x)>= 1 && a>x*x) {
		w = sqrt(a - x * x);
		cout << "|x|>=1 Значение 'w'=" << fixed << w << endl;
	} else{
		cout << "|x|>=1 Значение 'w' не может быть определено." << endl;
	}
}
 
// 8 задача
void function() {
	double x, y, b, z;
	cout.precision(3);
	cout << "Введите через пробел значения для 'x', 'y', 'b'" << endl;
	cin >> x >> y >> b;
	cout << "Значение x= " << fixed << x << "\n" << "значение y= " << fixed << y << "\n" << "значение b= " << fixed << b << endl;
	if (b - y > 0 && b - x >= 0) {
		z = log(b - y) * sqrt(b - x);
		cout << "Значение 'z'=" << z <<endl;
	} else {
		cout << "Значение 'z' не может быть вычисленно." << endl;
	}	 
}

// 9 задача 
void order() {
	int N,i,k;
	k = 1;
	cout << "Введите натуральное число 'N'." << endl;
	cin >> N;
	cout << "Введенное натуральное число 'N'="<<N << endl;
	for (i=N; i<N+10; i++) {
		cout<<k++<<") " << i+1 << endl;
	}
}

// 10 задача
void tab() {
	double x = -4, y = 0;
	cout.precision(3);
	for (x = -4; x < 4; x += 0.5)
	{ 
		y = (x*x - 2 * x + 2) / (x - 1);
		if (x - 1 == 0) 
			cout << "Значение x=" << fixed << x << "  " << " значение 'y' не возможно вычислить!" << endl;
		
		else
			cout << "Значение x=" << fixed << x <<"  "<< " значение y=" << y << endl;

	}
}

// 11 задача 
void loan() {
	double S, p, n, m, r;
	cout.precision(3);
	cout << "Введите через пробел ссуму займа 'S', процент 'p', количество лет 'n'." << endl;
	cin >> S >> p >> n;
	cout << "Значение S=" << fixed << S <<" "<< "значение p=" << fixed << p << " " << "значение n=" << fixed << n << endl;
	if (S > 0 && p > 0 && n > 0) {
		r = p / 100.0;
		if (12 * (pow(1 + r, n) - 1 > 0)) {
			
			m = S * r * pow(1 + r, n) / 12 * (pow(1 + r, n) - 1);
			cout << "Месячная выплата 'm'=" << fixed << m << endl;
		} else {
			cout << "Не возможно вычислить значение 'm'. Знаменатель не может быть меньше или равен 0."<< endl;
		}
		
	} else {
		cout << "Значения 'S', 'p', 'n' не могут быть меньше или равны 0!" << endl;
	}
}