#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool es_primo(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long int r = 600851475143;
    int max_factor = 0;
    int aux = 1;

    while (r > 1){
        if (es_primo(aux) && r%aux == 0){
            r = r/aux; // Vamos reduciendo el número
            max_factor = aux;
        }
        aux = aux + 1;
    }
    printf("El mayor factor primo es: %d \n", max_factor);

    return 0;
}

