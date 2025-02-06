/*
A partir de una conocida cantidad de metros que el usuario ingresa a través del teclado
se debe obtener su equivalente en centímetros, en milímetros y en pulgadas.
Ayuda: 1 pulgada equivale a 2.54 centímetros.
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    cout << "Ingrese una cantidad de metros para convertirlo: " << endl;
    double cantMetros;
    cin >> cantMetros;

    double convCentimetros = cantMetros * 100;
    double convPulgadas = cantMetros * 39.3701;
    double convMilimetros = cantMetros * 1000;

    cout << "Cantidad de Metros dadas: " << cantMetros << "\n"
        << "Conversion a centimetro: " << convCentimetros << "\n"
        << "Conversión a milimetros: " << convMilimetros << "\n"
        << "Conversión a pulgadas: " << convPulgadas << endl;
    return 0;
}
