#include <iostream>

class BMI {
    public:
        double calc(double m, double w);
};

int main() {
    BMI x;
    double _m, _w;
    std::cout << "Podaj mase [kg]:\t";
    std::cin >> _m;
    std::cout << "Podaj wzrost [m]:\t";
    std::cin >> _w;
    std::cout << x.calc(_m,_w);
    return 0;
}


double BMI::calc(double m, double w) {
    if(m>0 && w>0) {
        return m/(w*w);
    }
    return -1;
}
