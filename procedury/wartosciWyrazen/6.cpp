/*
  Napisz funkcję, która wyznacza pierwiastek całkowity z zadanej liczby. Zastosuj
  algorytm odejmowania kolejnych liczb nieparzystych.
*/

#include <cstdio>

int nOfDigts(int x) {
  int n=0;
  while(x) {
    x/=10;
    n++;
  }
  return n;
}

double sr(double s) {//lepszy algorytm
  if(s>0) {
    int p=nOfDigts((int)s)*1000000;
    double xn=s/2, xnp1;
    for(int i=0; i<p; i++) {
      xn = (xn+(s/xn))/2;
    }
    return xn;
  }
  return 0;
}

int main() {
  printf("%.45lf", sr(1337));
}
