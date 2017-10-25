/*
  Napisz funkcję, która wymienia wartościami dwie zadane liczby całkowite.
*/
#include <cstdio>

void swap(int *$, int *_);

int main() {
  int jan = 21, dzban = 37;
  printf("jan = %d | dzban = %d\n", jan, dzban);
  swap(&jan, &dzban);
  printf("jan = %d | dzban = %d\n", jan, dzban);
}

void swap(int *$, int *_) {
  int $_=*$;
  *$=*_;
  *_=$_;
}
