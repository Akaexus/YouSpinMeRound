#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <sstream>
/*
    stworz 10elementowa tablice losowych liczb z przedzialu 1 - 50 a nastepnie wyswietl te elementy, ktore sa liczbami pierwszymi
*/

std::string prettyPrint(int x[], int size) {
    std::stringstream _;
    _ << "[";
    for(int i=0; i<size; i++) {
        _ << x[i];
        if(i+1==size) {
            _<< "]";
        } else {
            _ << ", ";
        }
    }
    return _.str();
}

bool isPrime(int _) {
    if(_<2) {
        return false;
    }
    for(int i=2; i<=sqrt(_); i++) {
        if(!(_%i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int x[10];
    srand(time(NULL));
    for(int i=0; i<10; i++) {
        x[i] = rand()%50+1;
    }
    std::cout << "cala tablica: " << prettyPrint(x, sizeof(x)/sizeof(*x)) << "\n";
    std::cout << "tylko pierwsze: ";
    for(int i=0; i<10; i++) {
        if(isPrime(x[i])) {
            std::cout << x[i] << " ";
        }
    }
    return 0;
}
