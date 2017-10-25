// Napisz program sumujący cyfry zadanej liczby. Proces sumowania powtarzamy aż
// do momentu otrzymania liczby jednocyfrowej..
#include <iostream>
int $(std::string $ = "") {
  int _;
  std::cout << $ << ">";
  while (!(std::cin >> _)) {
    std::cout << $ << ">";
    std::cin.clear();
    std::cin.ignore();
  }
  return _;
}
int _(int $) {
  int _ = 0;
  while ($) {
    _ += $ % 10;
    $ /= 10;
  }
  return _;
}
int main() {
  std::cout << _($());
  return 0;
}
