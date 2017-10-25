/*
  Napisz funkcję, która stwierdza, czy zadana jako parametr liczba całkowita
  kończy się swoim pierwiastkiem. Liczby kończące się swoim pierwiastkiem
  to 25, 625. Wartością funkcji ma być jeden, jeśli liczba spełnia warunek oraz
  zero w przeciwnym wypadku.
*/

#include <iostream>
#include <cmath>

int n(int x){int n=0;while(x){x/=10;n++;}return n;}
int sqrtEnd(int x);

int main() {
  std::cout << sqrtEnd(1337);
}

int sqrtEnd(int x) {
  double sqrtX = sqrt(x);
  return sqrtX==(int)sqrtX&&x?!(((x-(int)sqrtX)%(int)pow(10,n(sqrtX)))):0;
}
