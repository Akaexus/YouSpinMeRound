#include <cstdio>

int a(int n) {
  if(n==0 || n==1) {
    return 1;
  }
  if(n%2) {
    return a(n-1)*n;
  }
  return a(n-1)+n;
}

int main() {
  printf("%d", a(2137));
}
