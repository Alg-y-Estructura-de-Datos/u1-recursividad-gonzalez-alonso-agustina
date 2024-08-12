
/*Implemente una función para potencias enteras con recursividad. Definición
recursiva para elevar un número a una potencia: Un número elevado a la potencia
cero produce la unidad; la potencia de un número se obtiene multiplicándolo por
sí mismo elevando a la potencia menos uno. Por ejemplo:
32=3*(31)=3*[3*(30)]=3*(3*1)=9*/

#include <iostream>
using namespace std;

int funcion (int num, int pot){
    if (pot == 0){ // caso base
        return 1;
    }
    else {
        return num * funcion(num, pot - 1); // llamada recursiva
    }
}

int main() {
    cout << "Ejercicio 1: " << endl;

    int num=3;
    int pot=2;
    cout << funcion(num, pot) << endl;
    return 0;
}
