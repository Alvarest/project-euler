#include <iostream>
#include <ctime>
using namespace std;

int main(){
    bool encontrado = false;
    int solucion = 21; // La solución debe ser par (resto 0 al dividir por 2). Sumamos al entrar en el bucle.
    clock_t t1 = clock();
    while(!encontrado){
        solucion++;
        int contador = 0;
        for (int i = 1; i <= 20; i++){
            if (solucion % i == 0){
                contador++;
            }
            else{
                break;
            }
            if (contador == 20){encontrado = true;}
        }
    }
    clock_t t2 = clock();
    double segundos = double(t2-t1) / CLOCKS_PER_SEC;
    cout << "La solución es: " << solucion << endl;
    cout << "La solución se ha tardado en conseguir " << segundos << " segundos" << endl;

    return 0;
}
