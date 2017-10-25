#include <iostream>
#include <cmath>

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

class F {
    public:
        void f(double a, double b) {
            if(!a) {
                if(!b) {
                    std::cout << "nieskonczonosc rozwiazan";
                } else {
                    std::cout << "brak";
                }
            } else {
                std::cout << -b/a;
            }
        }

        void f(double a, double b, double c) {
            if(a==0) {
                this->f(b, c);
            } else {
                int d = b*b-4*a*c;
                if(d<0) {
                    std::cout << "brak";
                } else if(!d) {
                    std::cout << "x = " << -b/(2*a);
                } else {
                    std::cout << "x1 = " << (-b-sqrt(d))/(2*a) << "\nx2 = " << (-b+sqrt(d))/(2*a);
                }
            }
        }
};

int main() {
    double a = promptDouble("a"),
           b = promptDouble("b"),
           c = promptDouble("c");
    F _;
    _.f(a, b, c);
    return 0;
}
