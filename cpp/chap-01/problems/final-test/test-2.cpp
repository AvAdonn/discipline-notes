#include <iostream>

int readNumber(){
    int a;
    std::cout << "Print your number:";
    std::cin >> a;
    return a;
}

void writeAnswer(int x){
    std::cout << "Your number:" << x << std::endl;
}