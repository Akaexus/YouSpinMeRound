/*
  Napisz funkcję, która wyznacza n-tą (n jest liczba naturalną) potęgę zadanej
  liczby rzeczywistej x. Funkcja ma wykorzystywać rekurencję.
*/
#include <iostream>

int power(int base, int n);

int main() {
  std::cout << power(2, 10);
}

int power(int base, int n) {
  if(n==1) {
    return base;
  }
  return base*power(base, n-1);
}
