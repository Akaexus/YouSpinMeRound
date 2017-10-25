#include <cstdio>

long long int f(long long int n, long long int m) {
  if(m==0) {
    return n;
  }
  if(n>=m && m>0) {
    return n-m+f(n-1, m)+f(n, m-1);
  }
  return f(m, n);
}

int main() {
  printf("%d", f(14, 2));
}
