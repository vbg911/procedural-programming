#include <iostream>
#include <ctime>

using namespace std;
void task6();
float getNumber();

void bullsandcows() {
	int i, j, number, temp, count = 10, count1 = 0, countplus, countminus, casual;
	int num[4], mynum[4];
	int glob[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	system("cls");
	cout << "���� ����� � �������\n\n";

	//����������� ��������������� �����, �� ����������� ���� ���������� ����
	srand(time(0));
	for (i = 0; i < 4; i++)
	{
		casual = rand() % count;
		mynum[i] = glob[casual];
		for (j = casual; j < 10; j++)
		{
			glob[j] = glob[j + 1];
		}
		count--;
	}
	cout << mynum[0] << mynum[1] << mynum[2] << mynum[3] << endl;
	cout << "� ������� �������������� �����, �� ���������� ���� ���������� ����. ���������� ���������� ���.\n";

	do
	{
		cout << endl << "��� ���: ";
		count1++;									// ������� ����� �����
		number = getNumber();
		// ��������� ���� �� ���������� �����
		num[0] = number / 1000;
		temp = number % 1000;
		num[1] = temp / 100;
		temp = temp % 100;
		num[2] = temp / 10;
		num[3] = temp % 10;
		//			cout << num[0] << num[1] << num[2] << num[3];

		countplus = 0;
		countminus = 0;
		for (i = 0; i < 4; i++)
		{
			if (num[i] == mynum[i])
			{
				countplus++;
			}
			else
			{
				for (j = 0; j < 4; j++)
				{
					if (num[j] == mynum[i])
					{
						countminus++;
					}
				}
			};
		}
		cout << "������ - " << countplus << "   ������� - " << countminus << endl;
	} while (countplus != 4);

	cout << "\n=========================\n";
	cout << "����������! �� " << count1 << " ����� �� �������� ����� " << num[0] << num[1] << num[2] << num[3];
	cout << "\n\n\n";
	system("pause");
	task6();
}