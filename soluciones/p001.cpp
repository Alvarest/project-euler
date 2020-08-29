#include <iostream>
using namespace std;
const int DIM = 1000;

int main() {
  int n = 3;
  int sum = 0;
  while (n < DIM){
    sum += n;
    n += 3;
  } //Se ejecuta 333 con DIM = 1000
  n = 15;
  sum += 15; //Sumamos los dos primeros multiplos de 5 a sum, no se sumarán en el while de abajo.
  while (n < DIM){
    n += 15;
    sum += n-10;
    sum += n-5;
  } //Sumamos los multiplos de 5 sin contar los que son también multiplos de 3. Para DIM = 1000 se ejecutará 66 veces
  cout << sum-DIM << endl; //En el while de arriba se suma 1000 cuando no se debería.

  return 0;
}





/*
// No se si es mejor solución la de arriba pero me parece que si. Por lo que se los if son lentos.
// We need to get the multiples of 3 or 5 below 1000
// If we have the numbers below 1000 and we want to get the multiples of 3, we just see what of these numbers return 0 when %3, same with 5
// Other way to get the numbers is multiply the natural numbers by 3 or 5 until they are grater than 1000

//Bad solution
int sum = 0;
for (int i = 1; i < DIM; i++){
  if (i%3 == 0 || i%5 == 0){
    sum += i;
  }
}
cout << sum << endl;
return 0;
*/
