#include <stdio.h>

const int MAX = 4000000; 

// Obtener el siguiente elemento de la serie de fibonacci a traves de 
// los dos anteriores.
int fibonacci(int n0, int n1){
    return n0 + n1;
}

int main() {
    int sum = 2;
    int n0 = 1;
    int n1 = 2;
    
    while (n1 <= DIM){
        int aux = fibonacci(n0, n1);
        n0 = n1;
        n1 = aux;
        if (n1%2 == 0){
            sum = sum + n1;
        }
    }
    printf("La suma de los números pares de la serie de fibonacci de números menores que %d es %d \n", DIM, sum);
    
    return 0;
}
