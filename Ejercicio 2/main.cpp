/*
Escriba un programa que lea dos n�meros enteros y realice el c�lculo de la suma, resta,
multiplicaci�n y divisi�n entre ambos valores. Los resultados deben mostrarse por
pantalla.
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

    cout << "Ingrese el primero n�mero: " << endl;
    double numero1;
    cin >> numero1;

    cout << "Ingrese el segundo n�mero: " << endl;
    double numero2;
    cin >> numero2;

    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;
    double division = numero1 / numero2;

    cout << "Resultado de la suma: " << suma << "\n"
        << "Resultado de la resta: " << resta << "\n"
        << "Resultado de la multiplicaci�n: " << multiplicacion << "\n"
        << "Resultado de la divisi�n: " << division << endl;
    return 0;
}
