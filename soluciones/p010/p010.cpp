#include <iostream>
#include <cmath>
using namespace std;

const int N = 2000000;

//Esta función comprueba si el entero pk es primo. Suponemos que no es par ni multiplo de 3. Podría hacerse más eficiente sin recorrer todos los números (ya sabemos que los pares no le dividen, ni otros)
bool isPrime(int pk){
    int r = floor(sqrt(pk)); //No hay porque comprobar más allá de su raiz, porque si hay un divisor mayor de la raíz, habrá otro menor.
    int f = 5;
    while (f <= r){
        if (pk%f == 0){
            return false;
        }
        f++;
        }
    return true;
}

int main(){
    long sum = 2+3+5+7; //Empiezo por los mayores de 10 aunque no tendría porque. Que sea long es importante
    int pk = 12;
    //Todo número primo se puede escribir como 6k(+/-)1, trivial.
    while (pk < N){
        if (isPrime(pk-1)){
            sum += pk-1;
        }
        if (isPrime(pk+1)){
            sum += pk+1;
        }
        pk += 6;
    }
    cout << "La suma de todos los primos menores que dos millones es: " << sum << endl;
    cout << "El último pk ha sido: " << pk << endl;

    return 0;
}
