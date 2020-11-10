#include <iostream>

using namespace std;
void test();
float getNumber();

void cinema() {
	long long  N, K, prevouis, vacancies, leftplace, rightplace, numberplace, numberplaceplus, last;
	int i;
	system("cls");
	cout << "Задача «Кинотеатр» \n\n";
	cout << "Определить количество свободных мест слева и справа от последнего школьника\n\n";
	cout << "Введите общее количество мест N = ";
	N = getNumber();
	cout << "Введите количество школьников K = ";
	K = getNumber();
	for (i = 0; i < 1024; i++)
	{
		prevouis = pow(2, i) - 1;
		if (prevouis >= K)
		{
			prevouis = pow(2, i - 1) - 1;
			vacancies = N - prevouis;									// Всего осталось свободных мест
			numberplace = vacancies / (prevouis + 1);					// Количество свободных кресел в промежутке
			numberplaceplus = vacancies % (prevouis + 1);				// Количество промежутков с свободными креслами + 1
			//cout << "школьников уже сидят - " << prevouis << "  Осталось свободных мест всего - " << vacancies  << endl;
			//cout << "Количество свободных мест в промежутке - " << numberplace << "   Кол-во промежутков с свободными местами +1 -   " << numberplaceplus << endl;
			break;
		}
	}
	last = K - prevouis;
	cout << "Осталось посадить - " << last << " школьников" << endl;
	if (last > numberplaceplus)
	{
		rightplace = (numberplace - 1) / 2;
		if ((numberplace - 1) % 2 > 0)
		{
			leftplace = rightplace + 1;
		}
		else
		{
			leftplace = rightplace;
		}
	}
	else
	{
		rightplace = (numberplace) / 2;
		if (numberplace % 2 > 0)
		{
			leftplace = rightplace + 1;
		}
		else
		{
			leftplace = rightplace;
		}
	}

	cout << "\n=========================\n";
	cout << "Свободных мест с одной стороны - " << rightplace << endl;
	cout << "Свободных мест с другой стороны - " << leftplace << endl;


	cout << "\n\n\n";
	system("pause");
	test();
}