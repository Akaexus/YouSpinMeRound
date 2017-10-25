/*
  Napisz program, który wydrukuje na ekranie wszystkie liczby kończące się swoim
  kwadratem z zakresu 1-10000. Program powinien wykorzystywać funkcję
  z zadania 9.1.8-a.
*/

#include <cstdio>
#include <cmath>

int n(int x){int n=0;while(x){x/=10;n++;}return n;}
int sqrtEnd(int x);

int main() {
  for(int i=1; i<=10000; i++) {
    if(sqrtEnd(i)) {
      printf("%d\n", i);
    }
  }
}

int sqrtEnd(int x) {
  double sqrtX = sqrt(x);
  return sqrtX==(int)sqrtX&&x?!(((x-(int)sqrtX)%(int)pow(10,n(sqrtX)))):0;
}
