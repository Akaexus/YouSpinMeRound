#include <iostream>
#include <vector>
#include <algorithm>

std::vector <int> binStrToVct(std::string n) {
    std::vector <int> temp;
    for(int i=0; i<n.size(); i++) {
        temp.push_back(n[i]-'0');
    }
    return temp;
}

void printVector(std::vector <int> v) {
    for(std::vector <int>::iterator i = v.begin(); i!=v.end(); i++) {
        std::cout << *i;
    }
}

std::vector <int> sum(std::string a, std::string b) {
    std::vector <int> n1 = binStrToVct(a),
    n2 = binStrToVct(b);
    std::reverse(n1.begin(), n1.end());
    std::reverse(n2.begin(), n2.end());
    if(n1.size()<n2.size()) {
        std::swap(n1, n2);
    }
    while(n2.size()<n1.size()) {
    n2.push_back(0);
    }
    for(std::vector <int>::iterator n1i = n1.begin(), n2i = n2.begin(); n1i!=n1.end(); n1i++, n2i++) {
        *n1i += *n2i;
        if(*n1i) {
            if(n1i+1 == n1.end()) {
                n1.push_back(*n1i/2);
                *n1i %= 2;
                break;
            } else {
                *(n1i+1) += *n1i/2;
                *n1i %= 2;
            }
        }
    }
    std::reverse(n1.begin(), n1.end());
    while(n1[0]==0) {
        n1.erase(n1.begin());
    }
    return n1;
}


int main() {
    printVector(sum("1", "111"));
    return 0;
}
