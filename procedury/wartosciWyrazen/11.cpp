/*
  Napisz funkcję, która stwierdza, czy zadana jako parametr liczba całkowita
  jest sześcianem pewnej liczby naturalnej. Wartością funkcji ma być jeden,
  jeśli liczba spełnia warunek oraz zero w przeciwnym wypadku.
*/

#include <iostream>
#include <cmath>

bool checkIntCubeRoot(int x);

int main() {
  std::cout << checkIntCubeRoot(6*6*5);
}

bool checkIntCubeRoot(int x) {
  float y = cbrt(x); //na double cos sie buguje stackoverflow.com/questions/17333
  return y==(int)y?1:0;
}
