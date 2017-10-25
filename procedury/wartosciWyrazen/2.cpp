/*
  Napisz funkcję RÓŻNICA wyznaczającą różnicę dwóch zadanych liczb całkowitych.
  Działanie funkcji sprawdź pisząc odpowiedni program.
*/

#include <iostream>

int sub(int x, int y);

int main() {
  std::cout << sub(21, 37);
}

int sub(int x, int y) {
  return x-y;
}
