/*
  Napisz funkcję, która wyznacza wartość n! (n jest liczba naturalną). Funkcja
  ma wykorzystywać iterację.
*/

#include <iostream>

long long int factorial(int x);

int main() {
  std::cout << factorial(5);
}

long long int factorial(int x) {
  if(x<0) {
    return -1;
  }
  int _=1;
  for(int i=1; i<=x; i++) {
    _*=i;
  }
  return _;
}
