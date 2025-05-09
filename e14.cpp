/*  ----- Año Bisiesto -----
Pide un año y determina si es bisiesto.*/

#include <iostream>
using namespace std;

int main(){
    bool bisiesto;
    int year;

    cout << "Este programa es para saber si un año es bisiesto\n";
    cout <<  "Dame un año" << endl;
    cin >> year;

    // Tomar el año y dividirlo por 4. Si da un número entero, es bisiesto.
    // Si el año es divisible por 100, se debe dividir por 400. Si es divisible por 400, es bisiesto.
    bisiesto = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    if (bisiesto){
        cout << "El año " << year << " es bisiesto " << endl;
    } else {
        cout << "El año " << year << " no es bisiesto " << endl;
    }
    
    return 0;
}