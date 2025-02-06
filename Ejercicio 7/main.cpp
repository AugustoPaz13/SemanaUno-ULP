/*
Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas hay en el
curso actual. Diseñar un algoritmo para este propósito. Recuerda que para calcular el
porcentaje puedes hacer una regla de 3 simple. El programa debe solicitar al usuario que
ingrese la cantidad total de niños, y la cantidad total de niñas que hay en el curso.
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

    printf("Ingrese la cantidad de chicos en el curso: ");
    int cantChicos;
    cin >> cantChicos;

    printf("Ingrese la cantidad de chicas en el curso: ");
    int cantChicas;
    cin >> cantChicas;

    double totalEstudiantes = cantChicos + cantChicas;
    double porcentajeChicos = ((cantChicos)/totalEstudiantes)*100;
    double porcentajeChicas = ((cantChicas)/totalEstudiantes)*100;

    cout << fixed << setprecision(2); //acorta la cantidad de decimales a solamente dos 00.00
    cout << "El porcentaje de chicos en el curso es: " << porcentajeChicos << "%"
        << "\n" << "El porcentaje de chicas en el curso es: " << porcentajeChicas << "%"
        << endl;
    return 0;
}
