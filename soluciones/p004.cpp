#include <iostream>
using namespace std;

const int MAX_DIM = 100;
const int MAX_DIM2 = 1000000;

bool is_palindrome(int n){
    int digits[MAX_DIM];
    int i = 0;
    digits[i] = n%10;
    while (n > 0){
        n = n/10;
        i++;
        digits[i] = n%10;
    }
    i--;
    int j = 0;
    while (i >= 0){
        if (digits[i] != digits[j]){
            return false;
        }
        i--; j++;
    }
    return true;
}

int main(){
    int palindromes[MAX_DIM2];
    int indice = 0; int n;
    for (int i = 100; i<1000; i++){
        for (int j = 100; j<1000; j++){
            n = i*j;
            if(is_palindrome(n)){
                palindromes[indice] = n;
                indice++;
            }
        }
    }
    n = 0;
    for (int i = 0; i < indice; i++){
        if (palindromes[i] > n){
            n = palindromes[i];
        }
    }
    cout << "El mayor palindromo producto de dos numeros de 3 cifras es: " << n << endl;

    return 0;
}
