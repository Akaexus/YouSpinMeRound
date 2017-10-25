/*
 * Zadanie 2.44.
 * Podaj specyfikację zadania i skonstruuj algorytm w postaci schematu blokowego
 * sprawdzający, czy dany n-wyrazowy ciąg liczb rzeczywistych wprowadza-nych z
 * klawiatury jest niemalejący.
*/


#include <iostream>
#include <sstream>

class prompt {
  public:
    static int _int(std::string name) {
      int $;
      std::cout << name << "> ";
      while(!(std::cin >> $)) {
        std::cout << name << "> ";
        std::cin.ignore();
        std::cin.clear();
      }
      return $;
    }
    static double _double(std::string name) {
      double $;
      std::cout << name << "> ";
      while(!(std::cin >> $)) {
        std::cout << name << "> ";
        std::cin.ignore();
        std::cin.clear();
      }
      return $;
    }
};

std::string i2s(int i) {
  std::stringstream $;
  $ << i;
  return $.str();
}

bool isNotDecreasing(double f[], int size) {
  for(int i=1; i<size; i++) {
    if(f[i-1]>f[i]) {
      return false;
    }
  }
  return true;
}


int main() {
  int size;
  do {
    size = prompt::_int("size");
  } while(!(size>1))
  double *array = new double[size];
  for(int i=0; i<size; i++) {
    array[i] = prompt::_double("array["+i2s(i)+"]");
  }
  std::cout << (isNotDecreasing(array, size)?"nie":"") << "malejacy";
}
