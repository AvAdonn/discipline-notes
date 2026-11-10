#include <iostream>
#include "combat.hpp"

int main(){
    int x;
    std::cout << "Enter a damage -> "; 
    std::cin >> x ;
    std::cout << "Orc damage -> " << orc::calculateDamage(x) << std::endl;
    std::cout << "Elf damage -> " << elf::calculateDamage(x) << std::endl;
}