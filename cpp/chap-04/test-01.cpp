#include <iostream>

int main(){
    int x{};
    std::cout << "Enter a first number: ";
    std::cin >> x;
    int y{};
    std::cout << "Enter a second number: ";
    std::cin >> y;
    if (x > y){
        std::cout << "Rotateeee" << "\n";
        //x = 2, y = 1
        int temp = y; //x = 2, temp = 1, y = 1 
        y = x;        //x = 2, temp = 1, y = 2
        x = temp;     //y = 2, x = 1
    }
    std::cout << "First: " << x << "\n" << "Second: " << y;
}


/*int main(){
    int x{};
    std::cout << "Enter a first number: ";
    std::cin >> x;
    int y{};
    std::cout << "Enter a second nubmer: ";
    std::cin >> y;
    if (x > y){
        std::swap(x, y);
    }
    std::cout << "First: " << x << "\n" << "Second: " << y;
}*/