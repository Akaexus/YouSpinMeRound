/*
  Napisz funkcję, która posiada trzy parametry formalne. Pierwszym parametrem
  jest liczba a, drugim tablica liczb tab zaś trzecim – liczba n. Funkcja ma
  dla zadanej liczy a zwracać w tablicy tab jej kod binarny. Liczba n ma
  informować o tym ile elementów tablicy zostało wypełnionych.
*/

#include <iostream>

std::string _(int a, int tab[], int n);
std::string d2b(int x);

int main() {
  int x[] = {104, 105, 116, 108, 101, 104, 32, 119, 105, 108, 108, 32, 114, 97, 105, 115, 101};
  std::cout << _(1, x, 17);
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

std::string _(int a, int tab[], int n) {
  if(a>=n) {
    return "error";
  }
  return d2b(tab[a]);
}
