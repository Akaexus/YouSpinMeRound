/*
  Napisz funkcję, która sortuje zadaną tablicę liczb całkowitych malejąco.
*/
#include <iostream>

void swap(int *$, int *_);
void reverseBubbleSort(int size, int *tab);

int main() {
  int x[] = {102, 117, 99, 107, 32, 115, 111, 99, 105, 101, 116, 121};
  reverseBubbleSort(sizeof(x)/sizeof(*x), x);
  for(int i=0; i<(sizeof(x)/sizeof(*x)); i++) {
    std::cout << x[i] << " ";
  }
}

void swap(int *$, int *_) {
  int $_=*$;
  *$=*_;
  *_=$_;
}

void reverseBubbleSort(int size, int *tab) { // n^2
  for(int i=0; i<size; i++) {
    for(int j=1; j<size; j++) {
      if(tab[j]>tab[j-1]) {
        swap(tab+j, tab+j-1);
      }
    }
  }
}
