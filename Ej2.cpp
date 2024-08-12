/*Implementar una función recursiva que determine la suma de los “n” primeros
números naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el
resultado de la suma.*/

#include <iostream>
using namespace std;

int sumaN (int num){
    if (num == 0) {
        return 0;
    }
    else {
        cout << num << " + " ;
       return num + sumaN(num-1);
    }
}

int main() {
    cout << "Ejercicio 2" << endl;

    int num = 5;
    cout << sumaN(num) << endl;

    return 0;
}
