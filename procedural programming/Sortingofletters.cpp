#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
void task3();
void Sorting(char* i, int n);

void Sortingofletters() {
    char s[31];
	cout << "Задать строку из 30 букв и расставить их в алфавитном порядке\n----------------------------------\n";
	cout << "Введите строку из 30 букв латиницы.\n";
    cin>>s;
    Sorting(s, strlen(s));
    cout << s;
}

void Sorting(char* i, int n) {
    int a, b;
    char t;
    for (a = 0; a < n; a++)
        for (b = n - 1; b >= a; b--)
        {
            if (i[b - 1] > i[b])
            {
                t = i[b - 1];
                i[b - 1] = i[b];
                i[b] = t;
            }
        }
}
