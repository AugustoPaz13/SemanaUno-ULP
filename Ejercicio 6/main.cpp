/*
. Escribir un algoritmo en el cual se consulte al usuario que ingrese ¿cómo está el día de
hoy? (soleado, nublado, lloviendo). A continuación, mostrar por pantalla un mensaje que
indique “El día de hoy está …”, completando el mensaje con el dato que ingresó el
usuario.
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

    printf("¿Como está el clima hoy?: ");
    string clima;
    getline(cin,clima);
    cout << "\nEl clima de hoy es: " << clima << endl;
    return 0;
}
