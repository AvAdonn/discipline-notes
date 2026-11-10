#include <iostream>
#include "add.hpp"

/*
int main (){
    int x;
    x = 3434;
    int y = 12;
    std::cout << x << std::endl;
    std::cout << x + y << std::endl;

    // cum

    int b;
    std::cout << b;

    return 0;
}

int main(){
    std::cout << "Enter number:" << std::endl;
    int a;
    std::cin >> a;
    std::cout << a << std::endl;
    
    return 0; -> не обовязково
}
*/
/*
void DoPrint(){
    std::cout << "Func worked" << std::endl;
}

int doubleNumber(int x){
    return x * 2;
}

int main(){
    std::cout << "Main start" << std::endl;
    DoPrint();
    std::cout << "After func" << std::endl;
}
*/
/*
int doubleNumber(int a){
    return a * 2;
}

int main(){
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Result = " << doubleNumber(x) << std::endl;
}
*/

//оголошення функції до мейна -> опис- після. 
double some_func(int);

#define SOMEONE

int main(){
    double a = 5;


    #ifdef SOMEONE
    std::cout << '+' << std::endl; //->Виконається якщо існує SOMEONE
    #endif 

    #ifdef SOMEONE
    std::cout << '+' << std::endl; //->Виконається якщо існує SOMEONE
    #endif 

    std::cout << some_func(a) << std::endl;
    std::cout << add(5, 4) << std::endl;
    return 0;
}

double some_func(int x){
    return (x * 22 + 0.23);
}

