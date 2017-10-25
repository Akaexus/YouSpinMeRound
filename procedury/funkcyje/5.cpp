#include <iostream>

double $(double _,int __){return 52*_*__;}
int main() {
    double __;
    int _;
    std::cout << "Ile kosztuje paczka? ";
    std::cin >> __;
    std::cout << "Ile paczek palisz tygodniowo? ";
    std::cin >> _;
    std::cout << "Kosztuje cie to " << $(__,_) << " polskich zlotych";
    return 0;
}
