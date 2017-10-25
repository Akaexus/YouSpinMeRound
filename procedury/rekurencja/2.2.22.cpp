#include <cstdio>

int a(int n) {
  if(n==0 || n==1) {
    return 1;
  }
  return a(n-1)+2*a(n-2)+3;
}

int main(){
  printf("%d", a(3));
}
