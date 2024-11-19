// Prime.cpp
#include <iostream>

int Prime(int x){
    if(x < 2) return 0;
    int i = 2;
    while(i * i <= x){
        if(x % i == 0) return 0;
        ++i;
    }
    return 1;
}

int main() {
    int input;
    if(!(std::cin >> input)) {
        std::cout<<0 << std::endl;
        return 0;
    }
    std::cout << (Prime(n) ? 1 : 0) << std::endl;
    return 0;
}
