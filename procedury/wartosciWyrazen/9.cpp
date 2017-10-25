/*
  Napisz funkcję, która stwierdza, czy zadana jako parametr liczba całkowita
  jest kwadratem pewnej liczby całkowitej. Liczby będ ące kwadratami liczb
  całkowitych to 1, 4, 9, 16 itd. Wartością funkcji ma być jeden, jeśli liczba
  spełnia warunek oraz zero w przeciwnym wypadku.
*/

#include <iostream>
#include <cmath>

bool checkIntSquareRoot(int x);

int main() {
  std::cout << checkIntSquareRoot(1337);
}

bool checkIntSquareRoot(int x) {
  double y = sqrt(x);
  return y==(int)y?1:0;
}
