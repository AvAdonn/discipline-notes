#include <iostream>

struct Employee{
    short id;
    int age;
    double salary;
};

int main(void){
    Employee john;
    john.id = 10;
    john.age = 120;
    john.salary = 12444.50;

    Employee teh; 
    teh = {12, 12, 3};
    std::cout << "ID: " << teh.id;
}


