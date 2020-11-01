#include <iostream>


void task5();
using namespace std;

void numbers() {
	system("cls");
	cout << "найти и напечатайте все пифагоровы числа в интервале [m, n]." << endl;
    int a1 = 0, a2=0;
    int count = 0;
	cout << "¬ведите два числа m и n: ";
    cin >> a1 >> a2;
    if (a1 > a2)
    {
        int tmp = a2;
        a2 = a1;
        a1 = tmp;
    }
    cout << "ѕифагоровы числа от "<< a1 << " до " << a2 << " включительно:" <<endl;
    for (int i = a1; i <= a2; i++)
    {
        for (int j = a1; j <= a2; j++)
        {
            for (int k = a1; k <= a2; k++)
            {
                if (i * i + j * j == k * k)
                    cout << "{" << i << ";" << j << ";" << k << "}" <<endl;
                count++;
            }
        }
    }
    if (count == 0)
        cout << "ѕифагоровых чисел не найдено." << endl;
	system("pause");
    task5();
}