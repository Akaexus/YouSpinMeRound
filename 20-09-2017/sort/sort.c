#include <stdio.h>

int main() {
  int size = 3;
  int *array = new int[size];
  for(int i=0; i<size; i++) {
    printf("liczba #%d: ", i+1);
    scanf("%d", &array[i]);
  }
  for(int i=0; i<size; i++) {
    for(int j=0; j<(size-1); j++) {
      if(array[j]>array[j+1]) {
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  for(int i=0; i<size; i++) {
    printf("%d\n", array[i]);
  }
  delete[] array;
}
