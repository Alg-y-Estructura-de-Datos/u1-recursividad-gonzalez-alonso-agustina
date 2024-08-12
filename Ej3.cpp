/*Implementar una función recursiva que dado un número entero lo muestre de
forma invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de
números negativos y mostrar primero el número a invertir y después el número
invertido.*/

#include <iostream>
using namespace std;

void invertirF ( int num, int& invertir){

    if ( num == 0){
        return;
    }
    else {
        invertir = invertir * 10 + num % 10;
        invertirF(num/10, invertir);
    }
}

int main() {
    cout << "Ejercicio 3" << endl;
    int num = 10523;
    int invertir = 0;

    invertirF(num, invertir);
    cout << invertir << endl;
    return 0;
}