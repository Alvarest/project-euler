#include <stdio.h>

const int N = 50;

//He construido el triangulo de Pascal sin darme cuenta, wow
//TODO Modificar esta funcion para que construya la fila N del triangulo de Pascal
void solCuadrado(long long int *columna, long long int tamaño){
    columna[0] = 1;
    for(int i = 1; i<=tamaño; i++){
        for(int j = 1; j<i; j++){
            columna[j] = columna[j]+columna[j-1];
        }   
        columna[i] = 2*columna[i-1];
    }
}

int main(){
    long long int tamaño;
    printf("Introduzca la dimensión del cuadrado: ");
    scanf("%d", &tamaño);

    long long int columna[N];
    solCuadrado(columna, tamaño); //Esta función borra todo el contenido del array que se le pasa.
    printf("Hay %lld formas de llegar a la esquina inferior de un cuadrado de dimensión %d. \n", columna[tamaño], tamaño);
    return 0;
}
