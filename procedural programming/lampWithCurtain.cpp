#include <iostream>

using namespace std;
void task1();


void lampWithCurtain() {
	string isDay, isCurtainOpen, isLampOn;
	bool day, curtain, lamp;
	system("cls");
	cout << "На улице день? Шторы отктрыты? Лампа включена?\n";
	cout << "Введите true/false 3 раза через пробел.\n";
	cin >> isDay >> isCurtainOpen >> isLampOn;
	if (isDay == "true") {
		day = true;
	}
	else if (isDay == "false") {
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

	cout << "На улице день? " << boolalpha << day << "\n" << "Шторы открыты? " << boolalpha << curtain << "\n" << "Лампа включена? " << boolalpha << lamp << endl;
	if (day && curtain) {
		cout << "В команате светло!" << endl;
	}
	else if (lamp) {
		cout << "В команате светло!" << endl;
	}
	else {
		cout << "В команате темно!" << endl;
	}

	system("pause");
	task1();
}
