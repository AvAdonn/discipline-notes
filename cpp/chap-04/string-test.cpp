#include <iostream>
#include <string>
#include <cmath>

typedef double time_t;
using time_t = double;

double cutNumber(double);
time_t cutNumber(time_t);

int main(void){
    //using namespace std;

    std::cout << "What is ur name? ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "What is ur age? ";
    int age{};
    std::cin >> age;
    double result = static_cast<double>(name.length()) / age;
    std::cout << "You've lived " << cutNumber(result) << " years for each letter in your name.";
}

double cutNumber(double number){
    return std::trunc(number * 1000) / 1000;
}