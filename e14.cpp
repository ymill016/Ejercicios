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

    // Si el año es divisble por 4 y si el año no es divisible por 100, o es divisible por 400, 
    //entonces es bisiesto.
    
    bisiesto = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    if (bisiesto){
        cout << "El año " << year << " es bisiesto " << endl;
    } else {
        cout << "El año " << year << " no es bisiesto " << endl;
    }

    return 0;
}