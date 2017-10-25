#include <iostream>

struct f {
    double a;
    double b;
};

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


f promptFunction(std::string name) {
    f _;
    std::cout << name;
    _.a = promptDouble("a");
    _.b = promptDouble("b");
    return _;
}

void check(f f1, f f2) {
    if(f1.a == f2.a) {
        std::cout << "rownolegle";
    } else if(f1.a == -f2.a) {
        std::cout << "prostopadle";
    } else {
        std::cout << "brak zaleznosci";
    }
}

int main() {
    check(promptFunction("f1"), promptFunction("f2"));
    return 0;
}
