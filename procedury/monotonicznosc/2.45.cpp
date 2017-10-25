/*
 * Zadanie 2.45.
 * Podaj specyfikację zadania i skonstruuj algorytm w postaci programu
 * sprawdzający monotoniczność wprowadzanego z klawiatury n-wyrazowego ciągu
 * liczb rzeczywistych. Wynikiem działania algorytmu powinny być komunikaty
 * określające ten ciąg: „rosnący'', „malejący", „nierosnący",„nlemalejący",
 * „niemonotoniczny" Na przykład dla ciągu (O, O. 0, 0, 0) poprawną odpowiedzią
 * będą komunikaty: „nierosnący", „niema-lejący".
*/


#include <iostream>
#include <sstream>
#include <map>

std::string i2s(int i) {
  std::stringstream $;
  $ << i;
  return $.str();
}

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

std::map<std::string,bool> getMonotonic(double array[], int size){
  std::map<std::string,bool> state = {{"increasing", true}, {"decreasing", true}, {"notIncreasing", true}, {"notDecreasing", true}, {"notMonotonic", false}};
  for(int i=1; i<size; i++) {
    if(array[i-1]>array[i]) {
      state["increasing"] = false;
      state["notDecreasing"] = false;
    } else if(array[i-1]<array[i]) {
      state["decreasing"] = false;
      state["notIncreasing"] = false;
    } else if(array[i-1]==array[i]) {
      state["increasing"] = false;
      state["decreasing"] = false;
    }
  }

  bool flag = true;
  for(std::map<std::string, bool>::iterator i = state.begin(); i!=state.end(); i++) {
    if(i->second == true) {
      flag = false;
    }
  }
  if(flag) {
    state["notMonotonic"] = true;
  }
  return state;
}

int main() {
  int size;
  do {
    size = prompt::_int("size");
  } while(!(size>1));
  double *array =  new double [size];
  for(int i=0; i<size; i++) {
    array[i] = prompt::_double("array["+i2s(i)+"]");
  }
  std::map<std::string,bool> monotonic = getMonotonic(array, size);
  for(std::map<std::string,bool>::iterator i = monotonic.begin(); i!=monotonic.end(); i++) {
    if(i->second) {
      std::cout << i->first << "\n";
    }
  }
}
