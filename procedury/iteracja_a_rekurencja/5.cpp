/*
  Napisz funkcję, która wyznacza wartość n! (n jest liczba naturalną).
  Funkcja ma wykorzystywać rekurencję.
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
  if(x==1) {
    return 1;
  }
  return x*factorial(x-1);
}
