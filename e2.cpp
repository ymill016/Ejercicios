// Número Par o Impar
//Solicita un número al usuario y determina si es par o impar.

#include <iostream>

using namespace std;

int main (void){
    int a;

    cout << "Verificar si un numero es par o impar" << endl;
    cout << "Dame un numero\n";
    cin >> a;

    if (a % 2 == 0){
        cout << "El numero " << a << " es par";
    }else{
        cout << "El numero " << a << " es impar";
    }

    return 0;
}
