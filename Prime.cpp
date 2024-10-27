// prime.cpp
#include <iostream>

int Prime(int x){
    if(x < 2) return 0;
    bool flag = true;
    int i = 2;
    while(i * i <= x){
        if(x % i == 0) return 0;
        ++i;
    }
    return 1;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << Prime(x) << std::endl;
    return 0;
}
