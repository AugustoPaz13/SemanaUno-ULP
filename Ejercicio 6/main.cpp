/*
. Escribir un algoritmo en el cual se consulte al usuario que ingrese �c�mo est� el d�a de
hoy? (soleado, nublado, lloviendo). A continuaci�n, mostrar por pantalla un mensaje que
indique �El d�a de hoy est� ��, completando el mensaje con el dato que ingres� el
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

    printf("�Como est� el clima hoy?: ");
    string clima;
    getline(cin,clima);
    cout << "\nEl clima de hoy es: " << clima << endl;
    return 0;
}
