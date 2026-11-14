#include <iostream>
#include <typeinfo>
#include <cmath>
#include <cstdint>


bool yes(bool);

int main(){
    int x{11};
    std::cout << "Convert " << static_cast<double>(x) << " " << typeid(x).name() <<"\n";
    std::cout << "X^2: " << pow(x, 2) << "\n";
    std::cout << sizeof(int) << " " << sizeof(long long) << " " << sizeof(int32_t) << "\n";
    std::cout << yes(1) << " " << yes(0) << '\n';
}

bool yes(bool a){
    bool ci{};
    a ? ci = true : ci = false;
    return ci;
}