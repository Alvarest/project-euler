#include <iostream>
using namespace std;
const int DIM = 1000;

int main() {
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
}
