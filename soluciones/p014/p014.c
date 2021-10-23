#include <stdio.h>
#include <unistd.h>

const int N = 1000000;

int numberCollatz(int n){
    int j = 1;
    printf("%i\n", n);
    unsigned long int elementos = n; //Creo esta variable para evitar problemas ya que los números salen de su rango
    while (elementos != 1){
        //int resto = elementos%2; printf("El resto es %i\n", resto); sleep(1);
        if (elementos % 2 == 0){
            elementos = elementos/2;
            printf("%i\n", elementos);
            j++;
        }
        else{
            elementos = 3*elementos+1;
            printf("%i\n", elementos);   
            j++;
        }
    }
    return j;
}

int main(){
    int cadena = 0;
    int max = cadena;
    int maxCollatz = 0;
    for (int i = 1; i<N; i++){
        cadena = numberCollatz(i);
        printf("La longitud de la cadena es %i\n", cadena);
        printf("\n");
        if (cadena > max){
            max = cadena;
            maxCollatz = i;
            printf("El nuevo maximo es %i, creado por %i.\n", max, maxCollatz);
            sleep(1);
        }
    }
   printf("La cadena de máxima longitud por debajo de %i es la creada por el número %i con %i elementos.\n", N, maxCollatz, max); 

    return 0;
}


