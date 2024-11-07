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

bool Check(std::string prom){
    int check = true;
    for (int i = 0; i < prom.length(); i++) {
        if('0' > (char)prom[i] && (char)prom[i] > '9') {
            check = false;
            break;
        }
    }

    return check;
}

int main() {
    std::string input;
    std::cin >> input;
    if(!Check(input)) std::cout<<0;
    else std::cout << Prime(std::stoi(input)) << std::endl;
    return 0;
}
