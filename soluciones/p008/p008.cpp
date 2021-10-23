#include <iostream>
#include <fstream>
using namespace std;

const int N = 13;

void imprimir(int read[]){
	cout << "[";
	for (int i = 0; i<N-1; i++){
		cout << read[i] << ", ";
	}
	cout << read[N-1] << "]" << endl;
}

long long int inicializar(ifstream &data, int read[]){
	long long int multiplo = 1;
	for (int i = 0; i<N; i++){
		read[i] = data.get() - '0';
		multiplo = multiplo * read[i];
	} 
	return multiplo;
}

bool leer(ifstream &data, int read[], int &sale, int j){
	sale = read[j];
	read[j] = data.get() - '0';
	
	if (read[j] < 0){
		read [j] = data.get() - '0';
	}
	
	if (data.eof()){
		return false;
	}
	return true;
}

void actualizar(long long int &multiplo, int entra, int sale, int &ceros){
	if (entra == 0){
		ceros++;
	}
	else{
		multiplo = multiplo*entra;
	}
	
	if (sale == 0){
		ceros--;
	}
	else{
		multiplo = multiplo/sale;
	}
}

int main(){

	ifstream data;
	data.open("data.txt");
	
	if (data.is_open()){

		int read[N];
		long long int multiplo = inicializar(data, read);
		long long int solucion = multiplo;

		int sale = 0;
		int ceros = 0;
		int j = 0;
		
		while (leer(data, read, sale, j)){
			int entra = read[j];
			actualizar(multiplo, entra, sale, ceros);
			
			if(ceros == 0 && multiplo > solucion){
				cout << multiplo <<  " | " << solucion << endl;
				solucion = multiplo;
				cout << "SOLUCION: ";
				imprimir(read);
			}			
			
			j = (j+1)%N;
		}

		data.close();
		cout << solucion << endl;

	}
	else{
		cout << "Can't open data file" << endl;
	}
}

