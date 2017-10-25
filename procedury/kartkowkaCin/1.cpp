#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int x=0, s=0, i=0, _min, _max;
    do {
        x = rand()%20+1;
        if(i==0) {
            _min = x;
            _max = x;
        } else {
            if(x<_min) {
                _min = x;
            }
            if(x>_max) {
                _max = x;
            }
        }
        s+=x;
        i++;
        printf("Liczba: %2d | Suma: %2d\n", x, s);
    } while(x%6);
    printf("\n\nSuma: %d\nMIN: %d\nMAX: %d\nLiczba liczb: %d", s, _min, _max, i);
    return 0;
}
