/*
  Napisz program wykorzystujący funkcję z zadania 9.5.1-a. Program ma drukować
  na ekranie wszystkie trójki liczb pitagorejskich z zakresu od 1 do 10.
*/
#include <cstdio>

bool checkPythagoras(int a, int b, int c);

int main() {
  int e[3] = {1, 1, 1};
  while(e[0]<=10000) {
    if(checkPythagoras(e[0], e[1], e[2])) {
      printf("a: %d, b: %d, c: %d\n", e[0], e[1], e[2]);
    }
    e[2]++;
    for(int i=2; i>0; i--) {
      if(e[i]>10) {
        e[i]=1;
        e[i-1]++;
      }
    }
  }
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
