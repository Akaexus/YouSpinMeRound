/*
  9.5.2 Napisz funkcję, która wczytuje wielomian z klawiatury.
  9.5.3 Napisz funkcję, która drukuje na ekranie wielomian.
*/

#include <iostream>
#include <sstream>
#include <vector>
std::string i2s(int _);
std::vector <float> promptPolynomial();
std::string printPolynomial(std::vector <float> v);

int main() {
  std::cout << printPolynomial(promptPolynomial());
}

std::string i2s(int _) {
  std::stringstream $;
  $<<_;
  return $.str();
}

std::vector <float> promptPolynomial() {
  std::vector <float> _;
  float $;
  std::cout << "Wprowadz wspolczynniki wielomianow. Aby przestac nacisnij CTRL+D [LINUX] | CTRL+Z [WINDOWS]\nw> ";
  while(std::cin >> $) {
    std::cout << "w> ";
    _.push_back($);
  }
  return _;
}
std::string printPolynomial(std::vector <float> v) {
  std::stringstream ss;
  for(int i=0, j=v.size()-1; i<v.size(); i++, j--) {
    ss << (i&&v[i]>0?"+":"") << v[i] << (j?"x^":"") << (j?i2s(j):"");
  }
  return ss.str();
}
