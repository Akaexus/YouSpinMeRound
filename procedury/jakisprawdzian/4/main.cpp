#include <iostream>
#include <cstdio>

double promptDouble(std::string name) {
    double _;
    std::cout << name << ">";
    while(!(std::cin >> _)) {
        std::cout << name << ">";
        std::cin.clear();
        std::cin.ignore();
    }
    return _;
}

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

double power(double base, int x) {
    int _=1;
    for(int i=1; i<=x; i++) {
        _*=base;
    }
    return _;
}

double powerR(double base, int x) {
    if(x==0) {
        return 1;
    }
    return base*powerR(base, x-1);
}

int main() {
    std::string options[] = {
        "Exit",
        "Potegowanie rekurencyjne",
        "Potegowanie iteracyjne"
    };
    bool f = true;
    while(f) {
        for(int i=0; i<(sizeof(options)/sizeof(*options)); i++) {
            printf("[%d] %s\n", i, options[i].c_str());
        }
        int choice = promptInt("choice"), x;
        double base;
        switch(choice) {
            case 1:
                base = promptDouble("base");
                x = promptDouble("x");
                std::cout << powerR(base, x);
            break;
            case 2:
                base = promptDouble("base");
                x = promptDouble("x");
                std::cout << power(base, x);
            case 0:
                f=false;
            break;
            default:
                continue;
            break;
        }
    }
    return 0;
}
