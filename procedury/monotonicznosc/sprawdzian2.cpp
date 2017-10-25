#include <iostream>
#include <cstdlib>
#include <ctime>
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

int sum(int array[], int size) {
  int _ = 0;
  for(int i=0; i<size; i++) {
    _+=array[i];
  }
  return _;
}

int multiply(int array[], int size) {
  int _ = 1;
  for(int i=0; i<size; i++) {
    if(array[i]>0) {
      _*=array[i];
    }
  }
  return _;
}

double avg(int array[], int size) {
  int _ = 0,
      c = 0;
  for(int i=0; i<size; i+=2) {
    c++;
    _+=array[i];
  }
  return _/(float)c;
}

int NWD(int a, int b) {
  while(b) {
    int r = a%b;
    a=b;
    b=r;
  }
  return a;
}

double indexOfMax(int array[], int size) {
  int _max = array[0],
      pos = 0;
  for(int i=1; i<size; i++) {
    if(array[i]>_max) {
      _max = array[i];
      pos = i;
    }
  }
  return pos;
}


int main() {
    srand(time(NULL));
    int array[10];
    int s = sizeof(array)/sizeof(*array);
    for(int i=0; i<s; i++) {
      array[i] = rand()%21+10;
    }
    std::cout << printArray(array, s);
    std::cout << "\nsum " << sum(array, s);
    std::cout << "\nmultiply " << multiply(array, s);
    std::cout << "\navg " << avg(array, s);
    std::cout << "\nnwd_[2],[3] " << NWD(array[2], array[3]);
    std::cout << "\nnwd_[8],[9] " << NWD(array[8], array[9]);
    std::cout << "\nindexOfMax " << indexOfMax(array, s);
    return 0;
}
