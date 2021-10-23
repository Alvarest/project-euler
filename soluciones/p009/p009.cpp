#include <iostream>
#include <cmath>
using namespace std;

int main(){
	bool encontrado = false;
	int m = 2;
	int n = 1;
	
	while (encontrado == false){
		int suma = 2*m*(m+n);
		if (1000%suma == 0){
			int k = 1000/suma;
			unsigned long long int solucion = (pow(k,3))*((pow(m, 4))-(pow(n, 4)))*(2*m*n);
			cout << "SOLUCION: " << solucion << endl;
			encontrado = true;		
			cout << k*((m^2)-(n^2)) << ", ";
			cout << k*(2*m*n) << ", ";
			cout << k*((m^2)+(n^2)) << endl;
			cout << m << ", " << n << ", " << k << endl;
		}
		else{
			if (n == m-1){
				m++;
				n = 1;
			}
			else{
				n++;
			}
		}	
	}
}
