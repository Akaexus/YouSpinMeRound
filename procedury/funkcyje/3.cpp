#include <iostream>

class Map {
    private:
        double d;
        double r;
    public:
        bool setDistance(double d);
        bool setRatio(double r);
        double calc();
};

int main() {
    Map _;
    double d, r;
    std::cout << "Podaj odleglosc [cm]: ";
    std::cin >> d;
    _.setDistance(d);
    std::cout << "Podaj skale: ";
    std::cin >> r;
    _.setRatio(r);
    std::cout << _.calc();
    return 0;
}

bool Map::setDistance(double d) {
    if(d>0) {
        this->d = d;
        return 1;
    }
    return 0;
}

bool Map::setRatio(double r) {
    if(r>0) {
        this->r = r;
        return 1;
    }
    return 0;
}

double Map::calc() {
    return this->r*this->d*100000;
}
