#include <iostream>
#include <fstream>

using namespace std;
void task6();
int getIntNumber();
void ismonk(int number);
int generalteacher(int teacher1, int teacher2);
int  teachers[600] = { 0 }, students[600][3] = { 0 };

void monks() {
	int i, task, monk, first, second, third;
	system("cls");
	cout << "������� �������\n\n";
	cout << "  ������ 1) �� ������ ������ ������, ��� �� ����� ����� � ���� ���, �� ��� ���� ��� �������, ������� ��� ������� � �.�. �� ������ ������� �����;\n";
	cout << "  ������ 2) �� ���� ���������� ������� ����� �� ������ ���������� �������.\n\n";

	//                          ������ ���� �������� ������
	//cout << "������� �������� ������ � ������� ����� ������ (����� ������, ����� 1-�� �������, ����� 2-�� �������, ����� 3-�� �������)\n\n";
	//do 
	//	{
	//		cin >> monk;
	//		if (monk == 0) break;
	//		cin >> first;
	//		cin >> second;
	//		cin >> third;
	//		students[monk][0] = first;
	//		students[monk][1] = second;
	//		students[monk][2] = third;
	//		teachers[first] = monk;
	//		teachers[second] = monk;
	//		teachers[third] = monk;
	//} while (monk > 0);
	//cout << input << endl;
	//monk = getIntNumber();
	//first = getIntNumber();
	//second = getIntNumber();
	//third = getIntNumber();

										// ���� �������� ������ �� ����� monk.txt
	ifstream in;										// ����� ��� ������
	in.open("monk.txt", ios::in);						// �������� ����� ��� ������
	for (i = 0; i < 6; i++)
	{
		in >> monk >> first >> second >> third;
		students[monk][0] = first;
		students[monk][1] = second;
		students[monk][2] = third;
		teachers[first] = monk;
		teachers[second] = monk;
		teachers[third] = monk;
	}
	in.close();

	cout << "������� ����� ������ ";
	task = getIntNumber();
	switch (task)
	{
	case 1:
		cout << "\n������� ����� ������ ";
		monk = getIntNumber();
		if (teachers[monk] == 0)
		{
			cout << monk << " �� �����";
		}
		else
		{
			cout << monk << " �����, ��� ������� ";
			ismonk(monk);
		}
		cout << endl;
		break;
	case 2:
		cout << "\n������� ������ ���� ������� ����� ������ ";
		cin >> first;
		cin >> second;
		if (teachers[first] == 0)
		{
			cout << first << " �� �����" << endl << endl;
		}

		else
		{
			if (teachers[second] == 0)
			{
				cout << second << " �� �����" << endl << endl;
			}
			else
			{
				cout << first << " � " << second << " ��� ������ � �� ����� ������� ";
				first = teachers[first];
				second = teachers[second];
				cout << generalteacher(first, second) << endl << endl;
			}
		}
		break;
	default:
		cout << endl << task << " �������� ����� ������\n\n";
		break;
	}

	system("pause");
	task6();
}

void ismonk(int number)							// ����������� ������� ��� ������ ��������
{
	if (teachers[number] == 1)
	{
		return;
	}
	else
	{
		cout << teachers[number] << " ";
		ismonk(teachers[number]);
	}
}

int generalteacher(int teacher1, int teacher2)		// ����������� ������� ��� ������ ������ �������
{
	if (teacher1 == teacher2)
		return (teacher1);
	else
	{
		if (teacher1 > teacher2)
		{
			teacher1 = teachers[teacher1];
		}
		else
		{
			teacher2 = teachers[teacher2];
		}
		generalteacher(teacher1, teacher2);
	}
}

