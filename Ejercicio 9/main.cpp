/*
Escriba un programa que permita al usuario ingresar el valor de dos variables numéricas
de tipo entero. Posteriormente, el programa debe intercambiar los valores de ambas
variables y mostrar el resultado final por pantalla.
Por ejemplo, si el usuario ingresa los valores num1 = 9 y num2 = 3, la salida a del
programa deberá mostrar: num1 = 3 y num2 = 9.
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    printf("Ingrese el valor de num1: ");
    int num1;
    cin >> num1;
    printf("Ingrese el valor de num2: ");
    int num2;
    cin >> num2;

    int aux = num1;
    num1 = num2;
    num2 = aux;

    cout << "El valor de num1 es: " << num1 << "\n"
        << "El valor de num2 es: " << num2 << endl;
    return 0;
}
