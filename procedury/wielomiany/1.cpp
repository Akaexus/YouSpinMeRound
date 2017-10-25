/*
  Napisz funkcję, która wyznacza warto ść wielomianu w zadanym punkcie.
  Parametrami funkcji mają być: n - stopień wielomianu (liczba całkowita), tab -
  tablica współczynników (współczynniki są liczbami rzeczywistymi) oraz x -
  zadany punkt (liczba rzeczywista). Wartością funkcji ma być wyznaczona wartość
  wielomianu.
*/

#include <iostream>
#include <cmath>

double polynomial(int n, double *tab, int x);

int main() {
  double _[] = {2, 1, 3, 7};
  std::cout << polynomial(3, _, 2);
}

double polynomial(int n, double *tab, int x) {
  int _ = 0;
  int backupn = n;
  for(int i=0; i<=backupn; i++, n--) {
    _+=tab[i]*pow(x, n);
  }
  return _;
}
