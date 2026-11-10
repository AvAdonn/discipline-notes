#include <iostream>

int readNumber();
void writeAnswer(int);

int main(){
    std::cout << "Welcome in prog!" << std::endl;
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y);
}

