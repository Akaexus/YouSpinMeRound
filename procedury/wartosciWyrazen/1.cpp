/*
  Napisz funkcję SUMA wyznaczającą sumę dwóch zadanych liczb całkowitych. Napisz
  program wykorzystujący funkcję SUMA.
*/

#include <iostream>

int add(int x, int y);

int main() {
  std::cout << add(21, 37);
}

int add(int x, int y) {
  return x+y;
}
