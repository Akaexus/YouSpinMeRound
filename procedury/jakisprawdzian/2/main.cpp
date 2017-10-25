#include <cstdio>

double _(double n) {
    if(n==1) {
        return 0.5;
    }
    if(n==2) {
        return 1;
    }
    return 3*_(n-2)+_(n-1);
}

int main() {
    for(int i=1; i<=10; i++) {
        //std::cout << _(i) << "\n";
        printf("a(%d) = %Lf\n", i, _(i));
    }
    return 0;
}
