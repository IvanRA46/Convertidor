// Convert.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Dec.h"
#include "Bin.h"
#include "Hex.h"

using namespace std;

int main()
{
    int opc;
    do {
        system("cls");
        cout << "Que tipo de numero vamos a convertir?\n1. Decimal.\n2. Binario.\n3. Hexadecimal.\n0. Salir\nElija una opcion: \n";
        cin >> opc;
        if (opc == 1) {
            system("cls");
            int numero;
            cout << "Ingrese un numero en Decimal: \n";
            cin >> numero;
            Dec* b;
            b = new Dec(numero);
            b->DecToBin(numero);
            b->DectoHex(numero);
            delete b;
            system("pause");
        }
        if (opc == 2) {
            system("cls");
            int binnum;
            cout << "Ingrese un numero en Binario: \n";
            cin >> binnum;
            Bin* h;
            h = new Bin(binnum);
            h->BinToHex(binnum);
            h->BinToDec(binnum);
            delete h;
            system("pause");
        }
        if (opc == 3) {
            system("cls");
            string hexnum;
            cout << "Ingrese un numero en Hexadecimal: \n";
            cin >> hexnum;
            Hex* d;
            d = new Hex(hexnum);
            d->HexToDec(hexnum);
            d->HexToBi(hexnum);
            delete d;
            system("pause");
        }
        if (opc == 0) {
            system("cls");
            cout << "\nHasta luego...\n";
            system("pause");
        }
        if (opc > 3 || opc < 0) {
            system("cls");
            cout << "\nOpcion invalida\n";
            system("pause");
        }
    } while (opc != 0);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
