#include <iostream>
using namespace std;

bool is_prime(int n){
    for(int i = 2; i <= n/2; i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long int r = 600851475143;
    int max_factor = 0;
    int aux = max_factor+1;
    while(r > 1){
        if (is_prime(aux) && r%aux == 0){
            r = r/aux;
            max_factor = aux;
        }
        aux++;
    }
    cout << "El mayor factor primo de 600851475143 es: " << max_factor << endl;

    return 0;
}
