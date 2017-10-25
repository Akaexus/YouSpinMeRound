// Napisz program drukujący na ekranie trójkąt. Wysokość trójkąta wczytujemy z 
// klawiatury. Poniższy trójkąt ma wysokość wys=5.
// http://phppp.gajdaw.pl/projekty/25-03/index.php?id=7
// Modyfikacja: wysokosc- wprowadza użytkownik
#include <iostream>
#include <sstream>
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
std::string _(int $, char ___ = '#') {
  std::stringstream ____;
  for (int _ = 0; _ < $; _++) {
    for (int __ = 1; __ < ($ - _); __++) {
      ____ << ' ';
    }
    for (int __ = 0; __ <= (2 * _); __++) {
      ____ << ___;
    }
    ____ << "\n";
  }
  return ____.str();
}
int main() {
  std::cout << _($());
  return 0;
}
