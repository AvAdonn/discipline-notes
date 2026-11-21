#include <iostream>
#include <string>

auto isEven(const int& x);

//Оператор goto погана практика оскільки може перестрибувати ініціалізацію змінних та є розумніші аналоги

//порядок виконання програми або ж потік виконання
int main(void){
    using namespace std;
    cout << boolalpha << true;
    exit(0);
    cout << boolalpha << false;

}

auto isEven(const int& x){
    switch (x % 2 == 0){
        case true:{
            std::string name = "Yeees";
            return name;
        }
        case false:{
            static std::string name = "Nooo";
            return name;
        }
        default:
            ;
    }
}