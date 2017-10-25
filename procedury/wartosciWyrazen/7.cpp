/*
  Napisz funkcję, która wyznacza liczbę cyfr zadanej liczby całkowitej.
*/
#include <iostream>

int nOfDigts(int x);

int main() {
  std::cout << nOfDigts(2137);
}


int nOfDigts(int x) {
  int n=0;
  while(x) {
    x/=10;
    n++;
  }
  return n;
}
