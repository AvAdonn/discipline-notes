#include <iostream>
#include <typeinfo>
#include <cmath>


//Типи даних
bool aValue;
char bValue;
short gValue;
int cValue;
long lValue;
long long yValue;
float dValue;
double eValue;
long double sValue;

//void fValue; -> Змінна не може мати "пустий" тип даних

void func(void){
}

bool isPrime(int);

int main(){
    //шота 1
    int g{400000000};
    std::cout << sizeof(g) << std::endl;

    std::cout << "bool:\t" << sizeof(char32_t) << std::endl; // bool: 4

    size_t gee(4);
    //шота 2
    float a{454.2f};
    float b{3434.34};
    double c{344.23};
    std::cout << typeid(a).name() << typeid(b).name() << typeid(c).name() <<std::endl;

    //експонента
    // 5344343 => 5.344343e6

    bool boo{true};
    std::cout << std::boolalpha;
    std::cout << boo << std::endl;

    int x;
    std::cin >> x;

    std::cout << isPrime(x);

    //const

    constexpr float pi{3.14f};

    int input{};
    std::cin >> input;
    const int t_g(input);


}

bool isPrime(int a){
    if (a <= 1) return false;
    if (a <= 3) return true;

    if (a % 2 == 0 || a % 3 == 0) return false;

    int i{5};
    int limit = std::sqrt(a);

    while (i <= limit){
        if (a % i == 0) return false;
        i++;
    }
    return true;
}
