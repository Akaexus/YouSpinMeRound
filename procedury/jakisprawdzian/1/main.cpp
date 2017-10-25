#include <iostream>

int promptInt(std::string name) {
    int _;
    std::cout << name << ">";
    while(!(std::cin >> _)) {
        std::cout << name << ">";
        std::cin.clear();
        std::cin.ignore();
    }
    return _;
}

int main() {
    int n=promptInt("n");
    double g=0, d=1;
    for(double i=1; i<=n; i++) {
        g+=i;
        d*=1/i;
    }
    std::cout << g/d;
    return 0;
}
