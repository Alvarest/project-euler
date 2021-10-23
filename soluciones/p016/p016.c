#include <stdio.h>

const int N = 400;

void inicializarPotencia(int *potencia, int tamaño){
	potencia[0] = 2;
	for(int i = 1; i<tamaño; i++){
		potencia[i] = 0;
	}
}

long long int sumarDigitos(int *potencia, int tamaño){
	long long int suma = 0;
	for (int i = 0; i<tamaño; i++){
		suma = suma + potencia[i];
	}
	return suma;
}

int main (){
	int potencia[N];
	int exponente = 999; //Porque en el bucle i tenemos la potencia i+2 y empezamos en el 0.
	inicializarPotencia(potencia, N);
	
	int decenas = 0;
	for (int i = 0; i<exponente; i++){
		for(int j = 0; j<N; j++){
			potencia[j] = potencia[j] * 2 + decenas;
			if(potencia[j] > 9){
				decenas = 1;
				potencia[j] = potencia[j] - 10;
			}else{
				decenas = 0;
			}
		}
	}
	long long int suma = sumarDigitos(potencia, 350);
	printf("La suma de los digitos es: %lld \n", suma);
	
	return 0;
}
