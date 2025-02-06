/*
Solicitar al usuario que ingrese la base y altura de un rect�ngulo, y calcular y mostrar por
pantalla el �rea y per�metro, del mismo.
�rea = base * altura
per�metro = 2 * altura + 2 * base.
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
    printf("Ingrese la base del rectangulo: ");
    double baseRectangulo;
    cin >> baseRectangulo;

    printf("Ingrese la altura del rectangulo: ");
    double alturaRectangulo;
    cin >> alturaRectangulo;

    double calculoArea = baseRectangulo * alturaRectangulo;
    double calculoPerimetro = ((2*baseRectangulo) + (2*alturaRectangulo));

    cout << fixed << setprecision(2); //acorta la cantidad de decimales a solamente dos 00.00
    cout << "El area del rectangulo es: " << calculoArea << "\n"
        << "El perimetro del rectangulo es: "<< calculoPerimetro << endl;
    return 0;
}
