// g++ 7.2.0
#include <cstdio>
#include <cmath>
#include <vector>

bool isPrime(int n) {
  if(n<2) {
    return false;
  }
  for(int i=2; i<=sqrt(n); i++) {
    if(!(n%i)) {
      return false;
    }
  }
  return true;
}

std::vector <int> sieve(int n) {
  if(n>0) {
    std::vector <int> primes;
    int *array = new int[n];
    for(int i = 1; i<(n+1); i++) {
      array[i] = i;
    }
    for(int i = 0; i<n; i++) {
      if(isPrime(array[i])) {
        primes.push_back(array[i]);
        for(int j=2*i; j<n; j+=i) {
          array[j] = 0;
        }
      }
    }
    delete[] array;
    return primes;
  }
}

int main() {
  std::vector <int> primes = sieve(100000000);
  for(std::vector<int>::iterator i = primes.begin(); i != primes.end(); i++) {
    printf("%d\n", *i);
  }
}
