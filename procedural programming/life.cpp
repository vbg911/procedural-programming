#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
void task6();
int getIntNumber();
int neighbors(int, int);
int outputondisplay();
int now[21][21], future[21][21];
int outprint;

void life()
{
	ofstream out;														// ����� ��� ������
	ifstream in;														// ����� ��� ������
	string textout;
	char ch;
	int i, j, k, generation, count;

	system("cls");
	cout << "������ �������\n\n";
	cout << "��������� ����������� ����� ���������������.\n\n";
	cout << "������� �������� ��� ������ � ���� work.dat\n 1 - ���� ���� �������� �������\n 2 - ������������ ����� ���������� �����\n";
	int vvod;
	cin >> vvod;
	cout << "������� �������� ��� ������ ��������� ��������\n 1 - ����� ���� ���������\n 2 - ���������� ������ ���������\n";
	cin >> outprint;
	if (outprint == 1) {
		cout << "����� ���� ��������� �������.\n";
	} else {
		cout << "����� ���� ��������� ��������.\n";
	}
	int number_left = 441;
	if (vvod==1) {
		cout << "���� ����� �������\n\n";
		out.open("work.dat", ios::out);					// ������� ����� ��� �������� 
		if (out)
		{
			for (i = 0; i < 21; i++)
			{
				for (j = 0; j < 21; j++)
				{
					cout << "�������� ������ "<<number_left<<" ��������"<< endl;
					number_left--;
					ch = _getch();
					out << ch;									// ������ � ���� ����������� 
				}
				out << "\n";									// ������ � ���� ����� ������
			}
			cin.ignore();
		}
		else
		{
			cout << "�� ���� ������� ���� ��� ������\n";
		}
		out.close();
	}
	else
		cout << "������������ ����� �������� �����.\n";
	

	cout << "������� ���������� ���������: ";
	generation = getIntNumber();

	in.open("work.dat", ios::in);						// ������� ����� ��� ������
	out.open("work.txt", ios::out);						// ������� ����� ��� �������� 
	cout << "\n��������� 1" << endl;
	for (i = 0; i < 21; i++)										// ������ ����������� ����� � now[][]
	{
		for (j = 0; j < 21; j++)
		{
			in >> ch;
			if (ch == 'h')									// ���� ������
			{
				now[i][j] = 1;
				future[i][j] = 1;						// ����� ����������	� ������ future, ����� ������� 1-� ��������� �� ����� 
			}
			else
			{
				now[i][j] = 0;
				future[i][j] = 0;
			}
			out << now[i][j];							    // ����� 1-�� ��������� � ����
		}
	}
	in.close();
	
	out << "��������� 1" << endl;
	int out1 = outputondisplay();
	if (out1 == 0) {
		system("pause");
		task6();
	}

	for (k = 1; k < generation; k++)
	{
		cout << "\n��������� " << k + 1 << endl;										// ����� ���������� � ���� work.out
		out << "��������� " << k + 1 << endl;											// ����� ���������� � ���� work.out
		for (i = 0; i < 21; i++)
		{
			for (j = 0; j < 21; j++)
			{
				if (now[i][j] > 0)												// ����� ���� ������
				{
					if (now[i][j] == 12)									// ������ �������
					{
						future[i][j] = 0;
					}
					else
					{
						count = neighbors(i, j);						// ���������� �������
						if (count == 2 || count == 3)
						{
							future[i][j] = ++now[i][j];
						}
						else
						{
							future[i][j] = 0;
						}
					}
				}
				else														// ����� ��� �������
				{
					count = neighbors(i, j);								// ���������� �������
					if (count == 3)
					{
						future[i][j] = 1;								// ���� ������� 3, �� ��������� ����� ������
					}
					else
					{
						future[i][j] = 0;
					}
				}
				out << future[i][j];									// ����� ���������� � ���� work.out
			}
			out << "\n";													// ������ � ���� ����� ������
		}
		int out = outputondisplay();
		if (out == 0) {
			break;
		}

		for (i = 0; i < 21; i++)												// future => now
		{
			for (j = 0; j < 21; j++)
			{
				now[i][j] = future[i][j];
			}
		}


	}
	out.close();

	system("pause");
	task6();
}

int neighbors(int i, int j)						// ������� �������� ���������� �������
{
	int n = 0, event;
	if (i == 0)									// ���������� �������������� �������
	{
		if (j == 0)								// ����� ������� ����
		{
			event = 1;
		}
		else
		{
			if (j == 20)						// ������ ������� ����
			{
				event = 2;
			}
			else								// ����� ������� ���
			{
				event = 3;
			}
		}
	}
	else
	{
		if (i == 20)
		{
			if (j == 0)						// ����� ������ ����					
			{
				event = 4;
			}
			else
			{
				if (j == 20)				// ������ ������ ����
				{
					event = 5;
				}
				else						// ����� ������ ���
				{
					event = 6;
				}
			}
		}
		else
		{
			if (j == 0)							// ����� ����� ���
			{
				event = 7;
			}
			else
			{
				if (j == 20)				// ����� ������ ���
				{
					event = 8;
				}
				else						// ���������� ������
				{
					event = 9;
				}
			}
		}
	}

	switch (event)
	{
	case 1:										// ����� ������� ����
		if (now[0][1] > 0) { n++; }
		if (now[1][1] > 0) { n++; }
		if (now[1][0] > 0) { n++; }
		break;
	case 2:										// ������ ������� ����
		if (now[0][19] > 0) { n++; }
		if (now[1][19] > 0) { n++; }
		if (now[1][20] > 0) { n++; }
		break;
	case 3:										// ����� ������� ���
		if (now[0][j - 1] > 0) { n++; }
		if (now[1][j - 1] > 0) { n++; }
		if (now[1][j] > 0) { n++; }
		if (now[1][j + 1] > 0) { n++; }
		if (now[0][j + 1] > 0) { n++; }
		break;
	case 4:										// ����� ������ ����
		if (now[19][0] > 0) { n++; }
		if (now[19][1] > 0) { n++; }
		if (now[20][1] > 0) { n++; }
		break;
	case 5:										// ������ ������ ����
		if (now[19][19] > 0) { n++; }
		if (now[19][20] > 0) { n++; }
		if (now[20][19] > 0) { n++; }
		break;
	case 6:										// ����� ������ ���
		if (now[20][j - 1] > 0) { n++; }
		if (now[19][j - 1] > 0) { n++; }
		if (now[19][j] > 0) { n++; }
		if (now[19][j + 1] > 0) { n++; }
		if (now[20][j + 1] > 0) { n++; }
		break;
	case 7:										// ����� ����� ���
		if (now[i - 1][0] > 0) { n++; }
		if (now[i - 1][1] > 0) { n++; }
		if (now[i][1] > 0) { n++; }
		if (now[i + 1][1] > 0) { n++; }
		if (now[i + 1][0] > 0) { n++; }
		break;
	case 8:										// ����� ������ ���
		if (now[i - 1][20] > 0) { n++; }
		if (now[i - 1][19] > 0) { n++; }
		if (now[i][19] > 0) { n++; }
		if (now[i + 1][19] > 0) { n++; }
		if (now[i + 1][20] > 0) { n++; }
		break;
	case 9:										// ���������� ������
		if (now[i - 1][j - 1] > 0) { n++; }
		if (now[i - 1][j] > 0) { n++; }
		if (now[i - 1][j + 1] > 0) { n++; }
		if (now[i][j - 1] > 0) { n++; }
		if (now[i][j + 1] > 0) { n++; }
		if (now[i + 1][j - 1] > 0) { n++; }
		if (now[i + 1][j] > 0) { n++; }
		if (now[i + 1][j + 1] > 0) { n++; }
		break;
	}
	return n;
}
int outputondisplay()										// ����� �� ����� ���������� ���������
{
	int i, j, countm;
	countm = 0;
	if (outprint ==1) 
		cout << "-----------------------------------------------------------------" << endl;
	for (i = 0; i < 21; i++)
	{
		if (outprint == 1)
			cout << "|";
		for (j = 0; j < 21; j++)
		{
			if (future[i][j] == 0)
			{
				if (outprint == 1)
					cout << "   ";
			}
			else
			{
				countm++;
				if (future[i][j] > 9)
				{
					if (outprint == 1)
						cout << " " << future[i][j];
				}
				else
				{
					if (outprint == 1)
						cout << "  " << future[i][j];
				}
			}
		}
		if (outprint == 1)
			cout << "|" << endl;
	}
	if (outprint == 1)
		cout << "-----------------------------------------------------------------" << endl;
	if (countm == 0)
	{
		cout << "��� ������� ������" << endl;

	}
	else
	{
		cout << "����� � ���� ��������� ����� �������� - " << countm << endl;
	}
	return countm;
}

