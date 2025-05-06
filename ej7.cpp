// --- EVALUACION DE TEMPERATURA ---
// Evaluación de Temperatura ide la temperatura en grados Celsius y muestra un mensaje si está fría (menor a 15°C), templada (15°C - 25°C) o caliente (más de 25°C).

#include <iostream> //libreria de flujo de datos de entrada y salida

using namespace std;

int main(void)
{
    int a;

    cout << "Ingresa la temperatura de hoy\n" << endl;
    cin >> a;


    if (a < 15)
    {
        cout << " La temepratura esta fria " << endl;
             
    }
    else if (a >= 15 && a <= 25)
    {

            cout << "La temperatura esta templada" << endl;
    }
    else
    {
        if (a > 25)
            cout << "la temperatura esta caliente" << endl;
    }

    return 0;
}