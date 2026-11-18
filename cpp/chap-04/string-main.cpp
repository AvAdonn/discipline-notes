#include <iostream>
#include <string>

int main(void){
    std::string name("Omg");
    name = "Somethink new";
    std::cout << name << "\n" << "What is ur name? ";
    std::string newName;
    //std::cin >> newName;         <-До першого пробілу
    std::getline(std::cin, newName); //весь рядок 
    std::cout << newName;

    int citizens{};
    std::cout << "\n" << "How many inhabitians? ";
    std:: cin >> citizens;

    std::string city;
    std::cin.ignore(10000, '\n');
    std::cout << "City?";
    std::getline(std::cin, city);
    std::cout << "Pop: " << citizens << ", City:  " << city << " Length: " <<city.length();
    
}