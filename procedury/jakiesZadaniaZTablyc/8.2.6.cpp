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
  int _min = a[0];
  int count = 1;
  for(int i=1; i<n; i++) {
    if(_min>a[i]) {
      _min = a[i];
      count = 1;
    } else if(_min == a[i]) {
      count++;
    }
  }
  int almostMin = a[0];
  for(int i=1; i<n; i++) {
    if(a[i]!=_min) {
      almostMin=a[i];
    }
  }
  if(almostMin == _min) {
    printf("brak prawie min");
    return 0;
  } else {
    for(int i=0; i<n; i++) {
      if(a[i]<almostMin && a[i]!=_min) {
        almostMin=a[i];
      }
    }
    std::cout << almostMin;
  }
  delete [] a;
}
