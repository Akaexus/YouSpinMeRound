/*
  Napisz funkcję ILOCZYN wyznaczającą iloczyn dwóch zadanych liczb całkowitych.
  Działanie funkcji sprawdź pisząc odpowiedni program.
*/

#include <iostream>

int multiply(int x, int y);

int main() {
  std::cout << multiply(21, 37);
}

int multiply(int x, int y) {
  return x*y;
}
