
 #include <iostream>

using namespace std;
void task4();
int to_dec(string intnum, int ss1);
int to_dec_frac(string fracnum, int ss1);

void number_system(){
	string originalnum;
	int originalsystem, newsystem;
	system("cls");
	cout << "������ �������� ����������.\nC������ ����� � ���������� � ��������� ��� � ����� ������ ������� ���������.\n";
	cout << "������� �������� ����� :";
	cin >> originalnum;
	string s1, s2;
	auto pos = originalnum.find(".");
	if (pos != string::npos)   // ���������� ������ �� ����� � ������� �����.
	{
		s1 = originalnum.substr(0, pos);
		s2 = originalnum.substr(pos + 1);
		cout << "����� ����� �����: " << s1 << endl << "������� ����� �����: " << s2 << endl;
	}
	cout << "������� ������� ��������� ��������� ����� :";
	cin >> originalsystem;
	cout << "������� �������� ������� ��������� :";
	cin >> newsystem;
	cout <<"����� ����� � 10 ������� ���������: "<<to_dec(s1, originalsystem)<<endl;
	system("pause");
	task4();
}

// ������� ��� �������� (����� ����� �����) �� ����� �� � 10-�
int to_dec(string intnum, int ss1){
	int dec=0;
	int* decnums = new int[intnum.length()];
	// ������� �� ������ � ����� �����
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
			cout << "�� ���������� ����." << endl;
		}

		
	}
	// ������� � 10 ������� ���������
	for (int i = 0; i < intnum.length(); i++) {
		int poww = pow(ss1, intnum.length() - i - 1);
		dec=dec+poww*decnums[i];
		}
	return dec;
}


// ������� (������� �����) �� ������������ ��  � 10-�
int to_dec_frac(string fracnum, int ss1) {
	int decfrac = 0;
	int* fracnums = new int[fracnum.length()];
	// ������� �� ������ � ����� �����
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
			cout << "�� ���������� ����." << endl;
		}
	}
	// ������� � 10 ������� ���������
	for (int i = 0; i < fracnum.length(); i++) {
		int poww = pow(ss1, fracnum.length() - i - 1);
		decfrac = decfrac + poww * fracnums[i];
	}
}