#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int fibonacci(int n0, int n1){
    return n0 + n1;
}

bool es_primo(int n){
    int limite = sqrt(n);
    for (int i = 2; i <= limite; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
