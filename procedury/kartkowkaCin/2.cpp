#include <cstdio>

int main() {
    int s;
    for(int x=2; x<=128; x+=2) {
        printf("%d\n", x);
        s+=x;
    }
    printf("\nSuma: %d", s);
    return 0;
}
