/*
Escribir un programa que calcule el precio promedio de un producto. El precio promedio
se debe calcular a partir del precio del mismo producto en tres establecimientos
distintos.
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

    double precioVea = 1100;
    double precioCarrefour = 975;
    double precioChangoMas = 1350;

    double promedioPrecios = ((precioCarrefour+precioVea+precioChangoMas)/3);

    cout << "El precio del jam�n en Vea: $" << precioVea << "\n"
        << "El precio del jam�n en Carrefour: $" << precioCarrefour << "\n"
        << "El precio del jam�n en Chango M�s: $" << precioChangoMas << endl;
    cout << "El precio promedio del producto es: $" << promedioPrecios << endl;
    return 0;
}
