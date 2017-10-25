#include <iostream>
#include <sstream>
#include <cstdio>

std::string i2s(int $) {
  std::stringstream _;
  _<<$;
  return _.str();
}

int promptInt(std::string n) {
  int _;
  std::cout << n << "> ";
  while(!(std::cin>>_)) {
    std::cout << n << "> ";
    std::cin.clear();
    std::cin.ignore();
  }
  return _;
}


int main() {
  int n = promptInt("n");
  int* a = new int[n];
  for(int i=0; i<n; i++) {
    a[i] = promptInt("a["+i2s(i)+"]");
  }
  int _max = a[0];
  int count = 1;
  for(int i=1; i<n; i++) {
    if(_max<a[i]) {
      _max = a[i];
      count = 1;
    } else if(_max == a[i]) {
      count++;
    }
  }
  int almostMax = a[0];
  for(int i=1; i<n; i++) {
    if(a[i]!=_max) {
      almostMax=a[i];
    }
  }
  if(almostMax == _max) {
    printf("brak prawie max");
    return 0;
  } else {
    int count = 0;
    for(int i=0; i<n; i++) {
      if(a[i]>almostMax && a[i]<_max) {
        almostMax=a[i];
        count = 1;
      } else if(a[i]==almostMax) {
        count++;
      }
    }
    printf("almostMax: %d \ncount: %d", almostMax, count);
  }
  delete [] a;
}
