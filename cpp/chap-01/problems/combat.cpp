#include "combat.hpp"

int elf::calculateDamage(int base_damage){
    return base_damage * 2;
}

int orc::calculateDamage(int base_damage){
    return base_damage + 50;
}
