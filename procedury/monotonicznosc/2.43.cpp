/*
 * Zadanie 2.43.
 * Podaj specyfikację zadania i skonstruuj algorytm w postaci listy kroków i
 * programu sprawdzający, czy dany n-wyrazowy ciąg liczb całkowitych
 * wprowadzanych z klawiatury jest malejący.
*/

#include <iostream>
#include <sstream>

int promptInt(std::string name) {
  int $;
  std::cout << name << "> ";
  while(!(std::cin >> $)) {
    std::cout << name << "> ";
    std::cin.ignore();
    std::cin.clear();
  }
  return $;
}

std::string i2s(int i) {
  std::stringstream $;
  $ << i;
  return $.str();
}

bool isDecreasing(int f[], int size) {
  for(int i=1; i<size; i++) {
    if(f[i-1]<=f[i]) {
      return false;
    }
  }
  return true;
}


int main() {
  int size;
  do {
     size = promptInt("size");
  } while(!(size>1));
  int *array = new int[size];
  for(int i=0; i<size; i++) {
    array[i] = promptInt("array["+i2s(i)+"]");
  }
  std::cout << (isDecreasing(array, size)?"":"nie") << "malejacy";
}
