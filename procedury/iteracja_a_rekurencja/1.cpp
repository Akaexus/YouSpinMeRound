/*
  Napisz funkcję, która wyznacza n-tą (n jest liczba naturalną) potęgę zadanej
  liczby rzeczywistej x. Funkcja ma wykorzystywać iterację.
*/
#include <iostream>

int power(int base, int n);

int main() {
  std::cout << power(2, 10);
}

int power(int base, int n) {
  int _ = 1;
  for(int i=0; i<n; i++) {
    _*=base;
  }
  return _;
}
