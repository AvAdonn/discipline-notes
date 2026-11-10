#include <iostream>

int readNumber();
void writeAnswer(int);

int main(){
    std::cout << "Welcome in prog!" << std::endl;
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y);
}

int readNumber(){
    int a;
    std::cout << "Print your number:";
    std::cin >> a;
    return a;
}

void writeAnswer(int x){
    std::cout << "Your number:" << x << std::endl;
}
