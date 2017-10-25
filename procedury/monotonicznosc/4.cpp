#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

bool check(double array[], int size) {
    for(int i=0; i<size; i++) {
        if(array[i]<9) {
            return false;
        }
    }
    return true;
}

int main() {
    double x[9];
    srand(time(NULL));
    for(int i=0; i<(sizeof(x))/sizeof(*x);i++) {
        x[i] = rand()%32-4;
        std::cout << x[i] << " ";
    }
    std::cout << "\n" << (check(x, sizeof(x)/sizeof(*x))?"wszystkie elementy sa nie mniejsze od 9":"w tablicy jest liczba mniejsza od 9");
    return 0;
}
