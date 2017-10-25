#include <iostream>
#include <sstream>

double promptDouble(std::string name) {
    double _;
    std::cout << name << ">";
    while(!(std::cin >> _)) {
        std::cin.ignore();
        std::cin.clear();
    }
    return _;
}

double promptInt(std::string name) {
    int _;
    std::cout << name << ">";
    while(!(std::cin >> _)) {
        std::cin.ignore();
        std::cin.clear();
    }
    return _;
}

std::string i2s(int i) {
    std::stringstream _;
    _ << i;
    return _.str();
}

bool isNotDecreasing(double array[], int size) {
    for(int i=1; i<size; i++) {
        if(array[i-1]>array[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    do {
        n = promptInt("n");
    } while(n<1);
    double *array = new double[n];
    for(int i=0; i<n; i++) {
        array[i] = promptDouble(i2s(i));
    }
    std::cout << (isNotDecreasing(array, n)?"ciag jest niemalejacy":"ciag jest malejacy");
    return 0;
}
