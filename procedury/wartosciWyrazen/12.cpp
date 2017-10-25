/*
  Napisz funkcję, która wyznacza maksimum z dwóch zadanych liczb całkowitych.
  Wartością funkcji ma być większa spośród liczb.
*/
#include <iostream>

int maxOf(int x, int y);

int main() {
  std::cout<< maxOf(21, 37);
}

int maxOf(int x, int y) {
  return x>y?x:y;
}
