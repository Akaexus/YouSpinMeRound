#include <iostream>

struct line {
    double a;
    double b;
};

line ask4Line(std::string name);

int main() {
    line l1, l2;
    l1 = ask4Line("y1");
    l2 = ask4Line("y2");
    std::cout << "\n";
    if(l1.a == l2.a) {
        if(l1.b == l2.b) {
            std::cout << "Proste nakladaja sie!";
        } else {
            std::cout << "Proste sa rownolegle!";
        }
    } else if(l1.a == -(1/l2.a)) {
        std::cout << "Prostopadle!";
    } else {
        std::cout << "Nic nie zachodzi!";
    }
    return 0;
}


line ask4Line(std::string name) {
    line temp;
    std::cout << "Podaj wspolczynnik \"a\" prostej " << name << ": ";
    std::cin >> temp.a;
    std::cout << "Podaj wspolczynnik \"b\" prostej " << name << ": ";
    std::cin >> temp.b;
    return temp;
}
