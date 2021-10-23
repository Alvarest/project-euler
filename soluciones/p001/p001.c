#include <stdio.h>

const int DIM = 1000;

int main(){
    int sum = 0;

    int n = 3;
    while (n < DIM){
        sum = sum + n;
        n = n+3; // n recorre todos los multiplos de 3 menores que 1000
    }
    
    // Recorremos todos los numeros multiplos de 3 y 15 menores que 1000
    // y sumamos los dos multiplos de 5 anteriores. Falta el 995.
    int dif = 15; 
    for (int i = 0; i < 66; i++){ // 1000/15 = 66
        sum = sum + dif;
        dif = dif + 30; // 30 = (15(n+1)-10+15(n+1)-5)-(15n-10+15n-5) 
    }
    sum = sum + 995;
    
    printf("La suma de todos los multiplos de 3 y 5 es %d \n", sum);
    return 0;
}
