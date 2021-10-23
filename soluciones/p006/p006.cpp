#include <iostream>
using namespace std;

int calculoR(int i, int n){
    if (n-i == i+1){
        return i*(n-i);
    } else {
        return i*(n-i)+calculoR(i+1, n-i);
    }
}

int main(){
    int n = 100*101/2; // SUM de 1 a 100
    int solucion = 2*calculoR(1, n);
    cout << "La solución es " << solucion << endl;

    return 0;
}
