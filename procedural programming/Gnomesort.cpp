#include <iostream>
using namespace std;
int n;
void task5();
void Gnome_sort(int i, int j, int* mas);

void gonm_sort()
{
	system("cls");
	cout << "������������ ��������� '������ ����������'" << endl;
	int m, k;
	cout << "������ �������  ";
	cin >> n;
	int* a = new int[n];
	for (k = 0; k < n; k++) //���� �������
	{
		cout << k + 1 << " ������� > "<<endl;
		cin >> a[k];
	}
	k = 1; m = 2;
	Gnome_sort(k, m, a); //����� ������� ����������
	delete[]a;
	cout << endl;
	system("pause");
	task5();
}

void Gnome_sort(int i, int j, int* mas) {
	while (i < n)
	{
		if (mas[i - 1] <= mas[i]) { i = j; j++; }
		else
		{
			int t = mas[i];
			mas[i] = mas[i - 1]; mas[i - 1] = t;
			i--;
			if (i == 0) { i = j; j++; }
		}
	}
	cout << "��������������� ������ : ";
	for (i = 0; i < n; i++) //����� �������
		cout << mas[i] << " ";
}