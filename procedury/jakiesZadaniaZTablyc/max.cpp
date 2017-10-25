#include <iostream>
#include <sstream>

std::string i2s(int i) {
    std::stringstream x;
    x << i;
    return x.str();
}

void prompt(std::string name, int* w) {
    int _;
    std::cout << name << ">";
    while(!(std::cin >> _)) {
        std::cout << name << ">";
        std::cin.clear();
        std::cin.ignore();
    }
    *w = _;
}

int _max(int t[], int _size) {
    int __max = t[0];
    for(int i=1; i<_size; i++) {
        if(t[i]>__max) {
            __max = t[i];
        }
    }
    return __max;
}

int main() {
    int t[4];
    for(int i=0; i<4; i++) {
        prompt("t["+i2s(i)+"]", &t[i]);
    }
    std::cout << _max(t, sizeof(t)/sizeof(*t));

    return 0;
}
