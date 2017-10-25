#include <iostream>
#include <cstdio>

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

int NWD(int a, int b) {
    int r;
    while(b) {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int NWW(int a, int b) {
    return (a*b)/NWD(a, b);
}

int main() {
    int a = promptInt("a"),
        b = promptInt("b");
    printf("NWD(%d, %d) = %d\n", a, b, NWD(a, b));
    printf("NWW(%d, %d) = %d\n", a, b, NWW(a, b));
    return 0;
}
