#include <iostream>
#include <cstdio>
#include <sstream>
/*
    tablica z n elementow, liczby i n podaje user, wyswietl max i ile razy wystapil
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

std::string i2s(int _) {
    std::stringstream $;
    $<<_;
    return $.str();
}

int promptInt(std::string name) {
    int _;
    std::cout << name << "> ";
    while(!(std::cin >> _)) {
        std::cout << name << "> ";
        std::cin.clear();
        std::cin.ignore();
    }
    return _;
}

int main() {
    int n;
    do {
        n = promptInt("n");
    } while(n<1);
    int* x = new int[n];
    for(int i=0; i<n; i++) {
        x[i] = promptInt("x["+i2s(i)+"]");
    }
    int _max = x[0];
    int c = 1;
    for(int i=1; i<n; i++) {
        if(x[i]>_max) {
            _max = x[i];
            c=1;
        } else if(x[i]==_max) {
            c++;
        }
    }
    std::cout << "x = " << prettyPrint(x, n);
    printf("\nmax = %d\ncount = %d", _max, c);
    return 0;
}
