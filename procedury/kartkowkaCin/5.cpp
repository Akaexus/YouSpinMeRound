#include <iostream>

int ask4Int(std::string name);


int main() {
    double x;
    do {
        x = ask4Int("x");
    } while(x==3);
    std::cout << "f(" << x << ") = " << (x+2)/(x-3);
    return 0;
}

int ask4Int(std::string name) {
    int temp;
    std::cout << name << "> ";
    while(!(std::cin >> temp)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << name << "> ";
    }
    return temp;
}
