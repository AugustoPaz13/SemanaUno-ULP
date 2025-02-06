/*
Conocido el número en matemática PI π, pedir al usuario que ingrese el valor del radio
de una circunferencia y calcular y mostrar por pantalla el área y perímetro. Recuerde que
para calcular el área y el perímetro se utilizan las siguientes fórmulas:
área = PI * radio2
perímetro = 2 * PI * radio
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip> // Para std::fixed y std::setprecision
#include <locale>  // Para setlocale

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    printf("Ingrese el radio de su circulo: ");
    double radio;
    cin >> radio;

    double pi = 3.141516;

    double area = pi * (radio*radio);
    double perimetro = 2 * pi * radio;

    cout << fixed << setprecision(2); //Limita la salida de dos decimales 00.00
    cout << "El radio del circulo es: " << radio << "\n"
        << "El area del ciruclo es: " << area << "\n"
        << "El perimetro del ciruclo es: " << perimetro << endl;
    return 0;
}
