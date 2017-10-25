/*
  Napisz funkcję, która stwierdza, czy zadana jako parametr liczba całkowita jest
  liczbą pierwszą. Wartością funkcji ma być jeden, jeśli liczba spełnia warunek
  oraz zero w przeciwnym wypadku.
*/

#include <iostream>
#include <cmath>

bool isPrime(int x);

int main() {
 std::cout << isPrime(pow(2, 31)-1);
}

bool isPrime(int x) {
  if(x<2) {
    return 0;
  }
  for(int i=2; i<=sqrt(x); i++) {
    if(!(x%i)) {
      return 0;
    }
  }
  return 1;
}
