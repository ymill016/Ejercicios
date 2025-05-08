#include <iostream>

using namespace std;

int main (void){
    int n;

    cout << "Ingresa tu nota del 1 al 100" << endl;
    cin >> n;

    if (n >= 60 && n <= 100){
        cout << " Usted esta aprobado " << endl;
    }else 
    if(n >= 0 && n < 60){
        cout << "Usted esta reprobado" << endl;
    }else{
        cout << "Ivalido. Ingrese una nota del 1 al 100" << endl;
        return 0;
    }
    return 0;

}