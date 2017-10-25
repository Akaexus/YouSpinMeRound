#include <iostream>

    int fibr(int n) {
        if(n==0 || n==1) {
            return 1;
        }
        return fibr(n-1)+fibr(n-2);
    }

    int fibi(int n) {
        if(n==0 || n==1) {
            return 1;
        }
        int n1 = 1, n2 = 1, temp;
        for(int i=1; i<n; i++) {
            temp = n1+n2;
            n1=n2;
            n2=temp;
        }
        return temp;
    }


int main() {
    for(int i=0; i<11; i++) {
            std::cout << fibi(i) << "\n";
    }
    return 0;
}
