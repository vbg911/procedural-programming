#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
void task5();

void change_file() {
	string filename;
    char a, b;
	system("cls");
    cout << "������ �������� �� ������(������������) �������.\n---------------------------------------------\n\n" << endl;
    cout << "\n������� ������ �� ������� ��������";
    cin >> b;
    char ch;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    while (fin.get(ch))
    {
        if (ch != ' ') fout << ch;
        else fout << b;
    }
    fin.close();
    fout.close();
    system("pause");
	task5();
}
