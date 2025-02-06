/*
Escriba un programa que lea dos números enteros y realice el cálculo de la suma, resta,
multiplicación y división entre ambos valores. Los resultados deben mostrarse por
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

    cout << "Ingrese el primero número: " << endl;
    double numero1;
    cin >> numero1;

    cout << "Ingrese el segundo número: " << endl;
    double numero2;
    cin >> numero2;

    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;
    double division = numero1 / numero2;

    cout << "Resultado de la suma: " << suma << "\n"
        << "Resultado de la resta: " << resta << "\n"
        << "Resultado de la multiplicación: " << multiplicacion << "\n"
        << "Resultado de la división: " << division << endl;
    return 0;
}
