/*
  Napisz funkcję Wizytówka, która wyprowadza na ekran informacje o programie.
*/
#include <iostream>
#include <sstream>

int n(int x);
std::string card(std::string firstname, std::string lastname, int age, int phone);

int main() {
  std::cout << card("Jonasz", "Koran Mekka", 88, 2147483647);
}

int n(int x) {
  int $=0;
  while(x) {
    x/=10;
    $++;
  }
  return $;
}

std::string card(std::string firstname, std::string lastname, int age, int phone) {
  int width = 5+firstname.length()+lastname.length()>n(phone)+11 ? 5+firstname.length()+lastname.length():n(phone)+11;
  std::stringstream ss;
  std::string hr = "", output;
  for(int i=0; i<width; i++) {
    hr+="#";
  }
  ss << hr << "\n# " << firstname << " " << lastname;
  for(int i=4+lastname.length()+firstname.length(); i<width; i++) {
    ss << " ";
  }
  ss << "#\n# Phone " << phone;
  for(int i=9+n(phone); i<width; i++) {
    ss << " ";
  }
  ss << "#\n# Age " << age;
  for(int i=7+n(age); i<width; i++) {
    ss << " ";
  }
  ss << "#\n" << hr;

  output = ss.str();
  return output;
}
