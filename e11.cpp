/*Número Más Cercano a 100
Solicita dos números y muestra cuál de ellos está más cerca de 100.*/

#include <iostream>
#include <cmath> //libreria cmath para funciones matematicas estandar
using namespace std;

int main (){
    //declaracion de variables
    float a, b;

    cout << "-- Este programa verifica cuál de los dos números es más cercano a 100 --" << endl << endl;

    cout << " Dame el primer numero: " << endl;
    cin >> a ;

    cout << "Dame el segundo numero : " << endl;
    cin >> b ;
    
    //declaramos variables para saber cual es la de menor distancia
    float res1 = abs(100 - a); //uso del valor absoluto
    float res2 = abs(100 - b);



    if (res1 > res2){ //verificar que el numero mas cercano es el segundo numero

        cout << "El numero mas cercano a 100 es " << b << endl ;
        
    } else if(res2 > res1){ //verificando si el numero mas cercano es el primer numero

        cout << "El numero mas cercano a 100 es " << a << endl;

    } else { //Si no se cumplen las condiciones anteriores, es porque estan a la misma distacia de 100

        cout << "Los numeros " << a << " y " << b << " estan a la misma distacia de 100 " << endl;

    }


    return 0;
}