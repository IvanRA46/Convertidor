#include "Dec.h"
#include <string>
#include <iostream>

using namespace std;

Dec::Dec(int numero) {
    this->numero = numero;
}

void Dec::DecToBin(int numero) {
    string binario = "";
    if (numero > 0) {
        while (numero > 0) {
            if (numero % 2 == 0) {
                binario = "0" + binario;
            }
            else {
                binario = "1" + binario;
            }
            numero = numero / 2;
        }
    }
    else if (numero == 0) {
        binario = "0";
    }
    else {
        binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
    }
    cout << "\nEl numero en Binario es:\n" << binario;
}

void Dec::DectoHex(int numero) {
   
    char hexaDeciNum[100];

   
    int i = 0;
    while (numero != 0) {
     
        int temp = 0;

      
        temp = numero % 16;

   
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        numero = numero / 16;
    }


    cout << "\nEl numero en Hexadecimal es:\n";
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
    cout << "\n";
}