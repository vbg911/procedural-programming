#include <iostream>
#include <string> 

using namespace std;
void task4();
double to_dec(string intnum, int ss1);
double to_dec_frac(string fracnum, int ss1);
string from_dec(double dec, int newsys);
string from_dec_farc(double decfrac, int newsys);
char znak;

void number_system(){
	cout.precision(11);
	string originalnum;
	int originalsystem, newsystem;
	system("cls");
	cout << "Задача «Системы счисления».\nCчитать число с клавиатуры и перевести его в любую другую систему счисления.\n";
	cout << "Введите исходное число :";
	cin >> originalnum;
	string s1, s2;
	auto pos = originalnum.find(".");
	if (pos != string::npos)   // разделение строки на целую и дробную части.
	{
		s1 = originalnum.substr(0, pos);
		s2 = originalnum.substr(pos + 1);
		if (s1[0]=='-') {
			znak = '-';
			s1.erase(s1.find('-'), 1);
		}
		//cout << "Целая часть числа: " << s1 << endl << "Дробная часть числа: " << s2 << endl;
	}
	cout << "Введите систему счисления исходного число :";
	cin >> originalsystem;
	cout << "Введите желаемую систему счисления :";
	cin >> newsystem;
	if (originalsystem==newsystem) {
		cout << "Начальная система совпадает с конечной.\n";
		system("pause");
		task4();
	}
	if (originalsystem>16) {
		cout << "Начальная система не может быть больше 16.\n";
		system("pause");
		task4();
	}
	if (newsystem > 16) {
		cout << "Конечная система не может быть больше 16.\n";
		system("pause");
		task4();
	}
	if (originalsystem < 2) {
		cout << "Начальная система не может быть меньше 2.\n";
		system("pause");
		task4();
	}
	if (newsystem <2) {
		cout << "Конечная система не может быть меньше 2.\n";
		system("pause");
		task4();
	}
	if (newsystem == 10) {
		cout << "Исходное число в 10 системе счисления: " << fixed << to_dec(s1, originalsystem) + to_dec_frac(s2, originalsystem) << endl;
		system("pause");
		task4();
	}
	cout << "Исходное число в 10 системе счисления: " << fixed<<to_dec(s1, originalsystem) + to_dec_frac(s2, originalsystem) << endl;
	string fromdec = from_dec(to_dec(s1, originalsystem), newsystem);
	reverse(fromdec.begin(), fromdec.end());
	cout << "Исходнок число в "<<newsystem<<" системе счисления: "<<znak<< fromdec<<"."<< from_dec_farc(to_dec_frac(s2, originalsystem), newsystem) <<endl;
	znak = ' ';
	system("pause"); 
	task4();
}


// функция для перевода (целой части числа) из любой СС в 10-ю
double to_dec(string intnum, int ss1){
	double dec=0;
	int* decnums = new int[intnum.length()];
	// перевод из строки в целые числа
	for (int j=0;j<intnum.length();j++) {
		switch (intnum[j])
		{
		case '0':
			decnums[j] = 0;
			break;
		case '1':
			decnums[j] = 1;
			break;
		case '2':
			decnums[j] = 2;
			break;
		case '3':
			decnums[j] = 3;
			break;
		case '4':
			decnums[j] = 4;
			break;
		case '5':
			decnums[j] = 5;
			break;
		case '6':
			decnums[j] = 6;
			break;
		case '7':
			decnums[j] = 7;
			break;
		case '8':
			decnums[j] = 8;
			break;
		case '9':
			decnums[j] = 9;
			break;
		case 'A':
			decnums[j] = 10;
			break;
		case 'B':
			decnums[j] = 11;
			break;
		case 'C':
			decnums[j] = 12;
			break;
		case 'D':
			decnums[j] = 13;
			break;
		case 'E':
			decnums[j] = 14;
			break;
		case 'F':
			decnums[j] = 15;
			break;
		default:
			cout << "Не правильный ввод." << endl;
		}

		
	}
	// перевод в 10 систему счисления
	for (int i = 0; i < intnum.length(); i++) {
		double poww = pow(ss1, intnum.length() - i - 1);
		dec=dec+poww*decnums[i];
		}
	return dec;
}


// перевод (дробной части) из произвольной сс  в 10-ю
double to_dec_frac(string fracnum, int ss1) {
	double decfrac = 0;
	double* fracnums = new double[fracnum.length()];
	// перевод из строки в целые числа
	for (int j = 0; j < fracnum.length(); j++) {
		switch (fracnum[j])
		{
		case '0':
			fracnums[j] = 0;
			break;
		case '1':
			fracnums[j] = 1;
			break;
		case '2':
			fracnums[j] = 2;
			break;
		case '3':
			fracnums[j] = 3;
			break;
		case '4':
			fracnums[j] = 4;
			break;
		case '5':
			fracnums[j] = 5;
			break;
		case '6':
			fracnums[j] = 6;
			break;
		case '7':
			fracnums[j] = 7;
			break;
		case '8':
			fracnums[j] = 8;
			break;
		case '9':
			fracnums[j] = 9;
			break;
		case 'A':
			fracnums[j] = 10;
			break;
		case 'B':
			fracnums[j] = 11;
			break;
		case 'C':
			fracnums[j] = 12;
			break;
		case 'D':
			fracnums[j] = 13;
			break;
		case 'E':
			fracnums[j] = 14;
			break;
		case 'F':
			fracnums[j] = 15;
			break;
		default:
			cout << "Не правильный ввод." << endl;
		}
	}
	// перевод в 10 систему счисления
	for (int i = 0; i < fracnum.length(); i++) {
		double poww = pow(ss1, -i-1);
		decfrac = decfrac + poww * fracnums[i];
	}
	return decfrac;
}


//функция для перевода целой части числа из 10 - й в любую сс
string from_dec(double dec , int newsys) {
	string fromdec = "";
	int dec1 = dec;
	int div, mod;
	do	{
		mod = dec1 % newsys;
		//перевод в правильный формат
		switch (mod)
		{
		case 0:
			fromdec += to_string(0);
			break;
		case 1:
			fromdec += to_string(1);
			break;
		case 2:
			fromdec += to_string(2);
			break;
		case 3:
			fromdec += to_string(3);
			break;
		case 4:
			fromdec += to_string(4);
			break;
		case 5:
			fromdec += to_string(5);
			break;
		case 6:
			fromdec += to_string(6);
			break;
		case 7:
			fromdec += to_string(7);
			break;
		case 8:
			fromdec += to_string(8);
			break;
		case 9:
			fromdec += to_string(9);
			break;
		case 10:
			fromdec += "A";
			break;
		case 11:
			fromdec += "B";
			break;
		case 12:
			fromdec += "C";
			break;
		case 13:
			fromdec += "D";
			break;
		case 14:
			fromdec += "E";
			break;
		case 15:
			fromdec += "F";
			break;
		default:
			cout << "Ошибка перевода." << endl;
		}
		div = dec1 / newsys;
		dec1 = div;
	} while (dec1>0);
	return fromdec;
}


//функция для перевода дробной части числа из 10 - й в любую сс
string from_dec_farc(double decfrac, int newsys) {
	string fromdecfrac;
	int i = 0;
	int num1;
	double result;
	if (decfrac != 0) {
		do {
			result = decfrac * newsys;
			num1 = result;
			result -= num1;
			i++;
			decfrac = result;
			switch (num1)
			{
			case 0:
				fromdecfrac += to_string(0);
				break;
			case 1:
				fromdecfrac += to_string(1);
				break;
			case 2:
				fromdecfrac += to_string(2);
				break;
			case 3:
				fromdecfrac += to_string(3);
				break;
			case 4:
				fromdecfrac += to_string(4);
				break;
			case 5:
				fromdecfrac += to_string(5);
				break;
			case 6:
				fromdecfrac += to_string(6);
				break;
			case 7:
				fromdecfrac += to_string(7);
				break;
			case 8:
				fromdecfrac += to_string(8);
				break;
			case 9:
				fromdecfrac += to_string(9);
				break;
			case 10:
				fromdecfrac += "A";
				break;
			case 11:
				fromdecfrac += "B";
				break;
			case 12:
				fromdecfrac += "C";
				break;
			case 13:
				fromdecfrac += "D";
				break;
			case 14:
				fromdecfrac += "E";
				break;
			case 15:
				fromdecfrac += "F";
				break;
			default:
				cout << "Ошибка перевода." << endl;
			}
		} while (i != 11);
	}
	else
		fromdecfrac = "0";
	return fromdecfrac;
}