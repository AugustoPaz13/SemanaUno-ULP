/*
Crear un programa que solicite al usuario que ingrese el precio de un producto al inicio
del año, y el precio del mismo producto al finalizar el año. El programa debe calcular cuál
fue el porcentaje de aumento que tuvo ese producto en el año y mostrarlo por pantalla
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

    printf("Ingrese el precio del jamón en Enero 2024: ");
    double precioEnero;
    cin>>precioEnero;
    printf("Ingrese el precio del jamón en Diciembre 2024: ");
    double precioDiciembre;
    cin>>precioDiciembre;

    double aumentoPrecio = ((precioDiciembre-precioEnero)/precioEnero)*100;
    cout << "\nEl porcentaje de aumento del producto es de: %" << aumentoPrecio
        << endl;
    return 0;
}
