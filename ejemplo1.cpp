// Comparacion de numeros
#include <iostream> //libreria de flujo de datos de entrada y salida

using namespace std;

int main(void)
{
    int a, b;
    int c;

    cout << "Ingresa dos numeros\n";

    cout << "Ingresa el primero numero\n";
    cin >> a;

    cout << "Ingresa el segundo numero\n";
    cin >> b;


    if (a > b)
    {
        cout << "El numero "<< a << " es mayor a " << b << endl;
             
    }
    else if (a<b)
    {

            cout << "El numero "<< a << " es menor a " << b << endl;
    }
    else
    {
        if (a == b)
            cout << "El numero " << a << " es igual a " << b << endl;
    }

    return 0;
}