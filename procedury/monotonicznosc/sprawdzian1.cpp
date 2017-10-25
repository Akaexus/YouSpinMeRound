#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <sstream>

std::string printArray(int array[], int size) {
  std::stringstream _;
  _<<"[";
  for(int i=0; i<size-1; i++) {
    _<< array[i] << ", ";
  }
  _<<array[size-1] << "]";
  return _.str();
}

std::string printVector(std::vector <int> array) {
  int size = array.size();
  std::stringstream _;
  _<<"[";
  for(int i=0; i<size-1; i++) {
    _<< array[i] << ", ";
  }
  _<<array[size-1] << "]";
  return _.str();
}

int promptInt(std::string name) {
  std::cout << name << "> ";
  int _;
  while(!(std::cin >> _)) {
    std::cout << name << "> ";
    std::cin.ignore();
    std::cin.clear();
  }
  return _;
}

bool isPrime(int e) {
  if(e<2) {
    return false;
  }
  for(int i=2; i<=sqrt(e); i++) {
    if(!(e%i)) {
      return false;
    }
  }
  return true;
}

std::vector <int> getPrimes(int array[], int size) {
  std::vector <int> _;
  for(int i=0; i<size; i++) {
    if(isPrime(array[i])) {
      _.push_back(array[i]);
    }
  }
  return _;
}

bool containsLowerThan4(int array[], int size) {
  for(int i=0; i<size; i++) {
    if(array[i]<4) {
      return true;
    }
  }
  return false;
}

bool isIncreasing(int array[], int size) {
  for(int i=1; i<size; i++) {
    if(!(array[i-1]<array[i])) {
      return false;
    }
  }
  return true;
}

int main() {
    srand(time(NULL));
    int n;
    do {
      n = promptInt("n");
    } while(n<3 || n>8);
    int *array = new int[n];
    for(int i=0; i<n; i++) {
      array[i] = rand()%26;
    }
    std::cout << printArray(array, n) << "\n";
    std::vector <int> primes = getPrimes(array, n);
    std::cout << "\ncontainsLowerThan4 " << (containsLowerThan4(array, n) ? "true" : "false");
    std::cout << "\nisIncreasing " << (isIncreasing(array, n) ? "true" : "false") << "\n";
    for(int i=0; i<primes.size(); i++) {
      std::cout << primes[i] << ", ";
    }
    // std::cout << "primes" << printVector(primes) << "\n";
    delete[] array;
    return 0;
}
