#include <iostream>

int main(){
    std::cout << "Enter 'a': ";
    double a;
    std::cin >> a;
    std::cout << "Enter 'b': ";
    double b;
    std::cin >> b;
    std::cout << "Enter operator '+ - / *': ";
    char operrator;
    std::cin >> operrator;

    if ('+' != operrator && '-' != operrator && '/' != operrator && '*' != operrator){
        return 0;
    }

    if (operrator == '+'){
        std::cout << a << " + " << b << " = " << a + b << std::endl;
    }
    else if (operrator == '-'){
        std::cout << a << " - " << b << " = " << a - b << std::endl;
    }
    else if (operrator == '/'){
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    }
    else if (operrator == '*'){
        std::cout << a << " * " << b << " = " << a * b << std::endl;
    } 
}