//Hay que pensar sobre lo de (double)n, además hay que intentar hacerlo más eficiente porque buscar cada factor de 
// de cada número no es nada eficiente. Por lo demás buen trabajo

#include <stdio.h>
#include <math.h>

int main(){
    
    int n = 0;
    int factores = 0;
    int i = 1; 
    while(1){
        n = n + i;
        for (int j = 1; j < sqrt((double)n); j++){
            if (n % j == 0){ 
                factores = factores+2;    
            } 
        }
        printf("El número triangular %i es: %i y tiene %i factores. Además su raíz es %f\n", i, n, factores, sqrt((double)n));

        if (factores > 500){
            printf("Este es el número que buscamos \n");
            break;
        }
        i++;
        factores = 0;
    }    

    return 0;
}
