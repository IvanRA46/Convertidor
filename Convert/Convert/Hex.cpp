#include "Hex.h"
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

Hex::Hex(string hexnum) {
	this->hexnum = hexnum;
	
}

void Hex::HexToDec(string hexnum) {
    int base = 1;
    int len = hexnum.size();
    int dec_val = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (hexnum[i] >= '0' && hexnum[i] <= '9') {
            dec_val += (int(hexnum[i]) - 48) * base;
            base = base * 16;
        }

        else if (hexnum[i] >= 'A' && hexnum[i] <= 'F') {
            dec_val += (int(hexnum[i]) - 55) * base;
            base = base * 16;
        }
    }
    cout << "\nEl valor en Decimal es:\n" << dec_val << "\n";
}

void Hex::HexToBi(string hexnum) {
    int i=0;
    cout << "\nEl valor en Binario es:\n";
    while (hexnum[i])
    {
        switch (hexnum[i])
        {
        case '0':
            cout << "0000";
            break;
        case '1':
            cout << "0001";
            break;
        case '2':
            cout << "0010";
            break;
        case '3':
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "--Numero hexadecimal invalido (" << hexnum[i] << ")--";
        }
        i++;
    }
    cout << endl;
}


