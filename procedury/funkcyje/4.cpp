#include <iostream>

double $(double _,int __){return _*__;}

int main() {
    double __;
    int _;
    std::cout << "Ilosc kcal: ";
    std::cin >> __;
    std::cout << "Ilosc batonikow: ";
    std::cin >> _;
    std::cout << $(__,_);
    return 0;
}
