#include "Bin.h"
#include <iostream>


using namespace std;

Bin::Bin(int binnum) {
	this->binnum = binnum;
}

void Bin::BinToHex(int binnum) {
    int hex[1000];
    int i = 1, j = 0, rem, dec = 0;
    while (binnum > 0)
    {
        rem = binnum % 2;
        dec = dec + rem * i;
        i = i * 2;
        binnum = binnum / 10;
    }
    i = 0;
    while (dec != 0)
    {
        hex[i] = dec % 16;
        dec = dec / 16;
        i++;
    }

   
    for (j = i - 1; j >= 0; j--)
    {
        if (hex[j] > 9)
            cout  << (char)(hex[j] + 55) << "\n";
        else
            cout << "\nEl valor en Hexadecimal es:\n" << hex[j] ;
    }
}

void Bin::BinToDec(int binnum) {
    int n = binnum;
    
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = binnum;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }
    cout << "\nEl valor en Decimal es:\n" << dec_value << "\n";
}