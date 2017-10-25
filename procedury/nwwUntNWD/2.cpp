#include <iostream>

int nwd(int a, int b) {
  if(!(a%b)) {
    return b;
  }
  return nwd(b, a%b);
}

int nww(int a, int b) {
  return (a*b)/nwd(a, b);
}

int main() {
  std::cout << nwd(12, 8);
}
