#include <iostream>

using namespace std;
void test();
float getNumber();

void cinema() {
	long long  N, K, prevouis, vacancies, leftplace, rightplace, numberplace, numberplaceplus, last;
	int i;
	system("cls");
	cout << "������ ����������\n\n";
	cout << "���������� ���������� ��������� ���� ����� � ������ �� ���������� ���������\n\n";
	cout << "������� ����� ���������� ���� N = ";
	N = getNumber();
	cout << "������� ���������� ���������� K = ";
	K = getNumber();
	for (i = 0; i < 1024; i++)
	{
		prevouis = pow(2, i) - 1;
		if (prevouis >= K)
		{
			prevouis = pow(2, i - 1) - 1;
			vacancies = N - prevouis;									// ����� �������� ��������� ����
			numberplace = vacancies / (prevouis + 1);					// ���������� ��������� ������ � ����������
			numberplaceplus = vacancies % (prevouis + 1);				// ���������� ����������� � ���������� �������� + 1
			//cout << "���������� ��� ����� - " << prevouis << "  �������� ��������� ���� ����� - " << vacancies  << endl;
			//cout << "���������� ��������� ���� � ���������� - " << numberplace << "   ���-�� ����������� � ���������� ������� +1 -   " << numberplaceplus << endl;
			break;
		}
	}
	last = K - prevouis;
	cout << "�������� �������� - " << last << " ����������" << endl;
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
	cout << "��������� ���� � ����� ������� - " << rightplace << endl;
	cout << "��������� ���� � ������ ������� - " << leftplace << endl;


	cout << "\n\n\n";
	system("pause");
	test();
}