/*
  Napisz funkcję, która ma trzy parametry formalne a, b, c będące liczbami
  całkowitymi. Wartością funkcji jest jeden, jeśli zadane liczby są liczbami
  pitagorejskimi oraz zero w przeciwnym wypadku. Liczby pitagorejskie spełniają
  warunek: a*a+b*b=c*c.
*/

#include <iostream>

bool checkPythagoras(int a, int b, int c);

int main() {
  std::cout << checkPythagoras(8, 10, 6);
}

bool checkPythagoras(int a, int b, int c) {
  int _[3] = {a, b, c};
  for(int i=0; i<3; i++) {
    for(int j=0; j<2; j++) {
      if(_[j]>_[j+1]) {
        int temp = _[j];
        _[j]=_[j+1];
        _[j+1]=temp;
      }
    }
  }
  return _[0]*_[0]+_[1]*_[1]==_[2]*_[2];
}
