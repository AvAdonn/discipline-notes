#include <iostream>

enum class MonsterType{
    ORGE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL,
};

struct Monsters{
    MonsterType type;
    std::string name;
    int health;
};

std::string getMonsterType(Monsters monster){
    if (monster.type == MonsterType::ORGE){
        return "Orge";
    }
    if (monster.type == MonsterType::GOBLIN){
        return "Goblin";
    }
    if (monster.type == MonsterType::SKELETON){
        return "Skeleton";
    }
    if (monster.type == MonsterType::ORC){
        return "Orc";
    }
    if (monster.type == MonsterType::TROLL){
        return "Troll";
    }
    return "Unknown"; 
}

void printMonster(Monsters monster){
    std::cout << "This " << getMonsterType(monster);
    std::cout << " was named " << monster.name << " and he has " << monster.health << " hp!\n";
}

int main(void){
    Monsters goblin = {MonsterType::GOBLIN, "Alex", 1950};
    Monsters orc = {MonsterType::ORC, "Jonathan", 2890};
    printMonster(goblin);
    printMonster(orc);
}