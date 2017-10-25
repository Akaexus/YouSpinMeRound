/*
  Napisz funkcję ILORAZ wyznaczającą iloraz dwóch zadanych liczb całkowitych.
  Działanie funkcji sprawdź pisząc odpowiedni program.
*/

#include <iostream>

double divide(int x, int y);

int main() {
  std::cout << divide(21, 37);
}

double divide(int x, int y) {
  return y?(float)x/y:0;
}
