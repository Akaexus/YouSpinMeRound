#include <iostream>
#include <cmath>
#include <sstream>

std::string i2s(int $) {
  std::stringstream _;
  _<<$;
  return _.str();
}

bool sumOfDigts(int _) {
  int $ = 0;
  while(_) {
    $+=_%10;
    _/=10;
  }
  return true;
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

std::string prettyPrint(int $[], int size) {
  std::stringstream _;
  for(int i=0; i<size; i++) {
    if(sumOfDigts($[i])==1) {
      _<<$[i] << " ";
    }
  }
  return _.str();
}


int main() {
  int n;
  do {
    n = promptInt("n");
  } while(n<1 || n>30);
  int* a = new int[n];
  for(int i=0; i<n; i++) {
    a[i] = promptInt("a["+i2s(i)+"]");
  }
  std::cout << prettyPrint(a, n) << "\n";
  delete [] a;
}
