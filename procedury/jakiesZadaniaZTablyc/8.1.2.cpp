#include <iostream>
#include <sstream>

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

std::string prettyPrintReverse(int $[], int size) {
  std::stringstream _;
  _ << "[";
  for(int i=--size; i>=0; i--) {
    _<< $[i];
    if(!i) {
      _ << "]";
    } else {
      _ << ", ";
    }
  }
  return _.str();
}

int main() {
  int _[10];
  for(int i=0; i<10; i++) {
    _[i] = promptInt("["+i2s(i)+"]");
  }
  std::cout << prettyPrintReverse(_, sizeof(_)/sizeof(*_)) << "\n";
  return 0;
}
