#include <iostream>
using namespace std;
const int DIM = 4000000;

int fibonacci(int n0, int n1){
  return n0+n1;
}

int main() {
  //We get the n fibonacci number, then we check if it is even and if so we add it, then we get the next

  int n0 = 1;
  int n1 = 2;
  int n2 = 0;
  int sum = n1;
  while (n2 < DIM) {
    n2 = fibonacci(n0, n1); //Es un problema hacer fibonacci antes del while.
    if (n2%2 == 0){
      sum += n2;
    }
    n0 = n1;
    n1 = n2;
  }
  cout << sum << endl;
}
