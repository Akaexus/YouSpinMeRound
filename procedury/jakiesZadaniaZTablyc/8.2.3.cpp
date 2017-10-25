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
  printf("max: %d\ncount: %d", _max, count);
  delete [] a;
}
