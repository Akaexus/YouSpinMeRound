#include <iostream>

class g2k {
    public:
        double calc(double g);
};

int main() {
    g2k x;
    double _g;
    std::cout << "Podaj mase:\t";
    std::cin >> _g;
    std::cout << x.calc(_g);
    return 0;
}

double g2k::calc(double g) {
    return g/1000;
}
