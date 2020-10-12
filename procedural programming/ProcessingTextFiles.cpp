#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;
void task5();


string encode(long lSize, long* lKey, string fPath)
{
    long i, j;
    string text, line, encstr;
    ifstream ifs(fPath.c_str());
    if (!ifs)
        cout << "Error open file : " << fPath.c_str() << endl;
    else
    {
        while (getline(ifs, line))
            text += line;
        ifs.close();
        cout << "input string : " << text.c_str() << endl;
        for (i = 0; i < text.length(); i += lSize)
        {
            line = "";
            for (j = 0; j < lSize; j++)
                line += text[i + j];
            for (j = 0; j < lSize; j++)
                encstr += line[lKey[j]];
        }
    }
    return encstr;
}

string decode(long lSize, long* lKey, string fPath)
{
    long i, j;
    string text, line, decstr;
    ifstream ifs(fPath.c_str());
    if (!ifs)
        cout << "Error open file : " << fPath.c_str() << endl;
    else
    {
        while (getline(ifs, line))
            text += line;
        ifs.close();
        cout << "input string : " << text.c_str() << endl;
        decstr = text;
        for (i = 0; i < text.length(); i += lSize)
        {
            for (j = 0; j < lSize; j++)
                decstr[i + lKey[j]] = text[i + j];
        }
    }
    return decstr;
}

void text_processing()
{
    char chr;
    long lKey[5] = { 0 };
    long i, lSize = sizeof(lKey) / sizeof(lKey[0]);

    bool bMenu = true;
    string text;
    system("cls");
        cout << "***MENU***\n";
        cout << "E - encode\n";
        cout << "D - decode\n";
        cin >> chr;
        switch (toupper(chr))
        {
        case 'E':
            cout << "Enter key-block : \n";
            for (i = 0; i < lSize; i++)
            {
                cout << "KEY[" << i + 1 << "] = ";
                cin >> lKey[i];
            }
            text = encode(lSize, lKey, "encode.txt");
            cout << "Encoded text : " << text.c_str() << endl;
            break;
        case 'D':
            cout << "Enter key-block : \n";
            for (i = 0; i < lSize; i++)
            {
                cout << "KEY[" << i + 1 << "] = ";
                cin >> lKey[i];
            }
            text = decode(lSize, lKey, "decode.txt");
            cout << "Decoded text : " << text.c_str() << endl;
            break;
        default:
            cout << "Unsupported key is pressed\n";
            break;
        }
        cout << "Press Y for see MENU once again\n";
        cout << "Any other key - EXIT\n";
        cin >> chr;
        if (toupper(chr) != 'Y') {
        system("cls");
        }
    system("pause");
    task5();
}