/*
  Napisz funkcję, która posiada trzy parametry formalne. Pierwszym parametrem
  jest liczba a, drugim tablica liczb tab zaś trzecim – liczba n. Funkcja ma
  dla zadanej liczy a zwracać w tablicy tab jej kod Graya. Liczba n ma
  informować o tym ile elementów tablicy zostało wypełnionych.
*/
#include <iostream>

std::string d2b(int x);
std::string grayCodeFromArray(int a, int *tab, int n);

int main() {
  int x[] = {102, 117, 99, 107, 32, 115, 111, 99, 105, 101, 116, 121};
  std::cout << grayCodeFromArray(5, x, sizeof(x)/sizeof(*x));
}

std::string d2b(int x) {
  std::string b;
  while(x) {
    if(x%2) {
      b="1"+b;
    } else {
      b="0"+b;
    }
    x/=2;
  }
  return b;
}

std::string grayCodeFromArray(int a, int *tab, int n) {
  if(a>n) {
    return "error";
  }
  int x = tab[a];
  return d2b(x^(x/2));
}
