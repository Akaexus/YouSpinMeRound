/*
  Napisz funkcję, która znajduje w tablicy element minimalny. Parametrami
  funkcji mają być: tablica tab oraz liczba elementów tablicy – n. Wartością
  funkcji ma być element maksymalny.
*/
#include <iostream>

int minOfArray(int tab[], int n);

int main() {
  int x[] = {104, 105, 116, 108, 101, 104, 32, 119, 105, 108, 108, 32, 114, 97, 105, 115, 101};
  std::cout << minOfArray(x, sizeof(x)/sizeof(*x));
}


int minOfArray(int tab[], int n) {
  if(n>0) {
    int _=tab[0];
    for(int i=1; i<n; i++) {
      if(tab[i]<_) {
        _=tab[i];
      }
    }
    return _;
  }
  return false;
}
