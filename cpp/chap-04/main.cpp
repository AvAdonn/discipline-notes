#include <iostream>
#include <cstring>


//static || extern локальна <-> для файлу || для всіх файлів 

char value[50] = "Global";

int test();

int main(){
    std::strcpy(value, "Full-global");
    std::cout << value << "\n";
    char value[50] = "Local";

    std::cout << "Global: " << ::value << "\n" << "Local: " << value << std::endl;

    std::strcpy(::value, "Full-global");
    std::cout << value << "\n";

    double k{56};
    {
        double g{45};
        std::cout << g << "\n";
    }
    //Змінну "g" вже не знайдено(())
    //std::cout << g << "\n";
    std::cout << k << "\n";

    test();
    test();
    test();
    long long xy{33233243232424};
    char y = xy;
    std::cout << y << "\n";
}

int test(void){
    using namespace std;
    cout << "chozahuinia: ";
    static int x{3};
    int y{};
    cin >> y;
    cout << "x + y = " << x + y << endl;
    ++x;
}