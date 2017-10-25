#include <iostream>
#include <cmath>
#include <sstream>

std::string i2s(int $) {
  std::stringstream _;
  _<<$;
  return _.str();
}

double promptDouble(std::string n) {
  double _;
  std::cout << n << "> ";
  while(!(std::cin>>_)) {
    std::cout << n << "> ";
    std::cin.clear();
    std::cin.ignore();
  }
  return _;
}

std::string prettyPrint(double $[], int size) {
  std::stringstream _;
  _ << "[";
  for(int i=0; i<size; i++) {
    _<< $[i];
    if(i+1==size) {
      _ << "]";
    } else {
      _ << ", ";
    }
  }
  return _.str();
}


int main() {
  int n;
  do {
    n = promptDouble("n");
  } while(n<1 || n>30);
  double* a = new double[n];
  for(int i=0; i<n; i++) {
    a[i] = pow(promptDouble("a["+i2s(i)+"]"), 3);
  }
  std::cout << prettyPrint(a, n) << "\n";
  delete [] a;
}
