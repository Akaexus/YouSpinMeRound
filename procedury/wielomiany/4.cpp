#include <iostream>
#include <cmath>


double polynomial(int n, double *tab, int x);
double polynomialMultiply(int n, double *tab, int x, int n2, double *tab2, int x2);


int main() {
  double x[] = {2, 1, 3, 7};
  std::cout << polynomialMultiply(2, x, 1, 3, x, 7);
}

double polynomial(int n, double *tab, int x) {
  int _ = 0;
  int backupn = n;
  for(int i=0; i<=backupn; i++, n--) {
    _+=tab[i]*pow(x, n);
  }
  return _;
}

double polynomialMultiply(int n, double *tab, int x, int n2, double *tab2, int x2) {
  return polynomial(n, tab, x)-polynomial(n2, tab2, x2);
}
