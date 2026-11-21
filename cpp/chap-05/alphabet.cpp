#include <iostream>

void daDaFor(int incim);
void test();

int main()
{
    char mychar = 'a';
    do{
        std::cout << mychar  << " " << static_cast<int>(mychar) << "\n";
        ++mychar;
    }
    while (mychar <= 'z');
    
    int alex{5};
    daDaFor(alex);
    return 0;
}

void daDaFor(int incim){
    for (--incim;incim <= 10; ++incim){
        std::cout << incim << " ";
        static int count{0};
        ++count;
        std::cout << "Count: " << count;
    }
    test();
    
}
void test(){
    for (int x{};x <=20 ;x += 2){
        std::cout << '\n' << x << " Woooow";
    }
}