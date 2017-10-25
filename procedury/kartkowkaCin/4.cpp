#include <iostream>

int ask4Int(std::string name);
double ask4Float(std::string name);

int main() {
    double x, y;
    int n;
    std::cout << "Podaj x!\n";
    x = ask4Float("x");
    std::cout << "Podaj n!\n";
    do {
        n = ask4Int("n");
    } while(!(n>=2 && n<=7));
    y=x;
    for(int i=0; i<(n-1); i++) {
        y*=x;
    }
    std::cout << y;
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

double ask4Float(std::string name) {
    float temp;
    std::cout << name << "> ";
    while(!(std::cin >> temp)) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << name << "> ";
    }
    return temp;
}
