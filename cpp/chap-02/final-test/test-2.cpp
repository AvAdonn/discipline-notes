#include <iostream>
#include "test-const.hpp"


float preHeight(void);
float calculateDistance(int sec, float hight);

int main(){
    float heigth{preHeight()};
    int sec{};

    while (true){
        float newHeight = calculateDistance(sec, heigth);
        
        if (newHeight > 0.0){
            std::cout << "At " << sec << " seconds, the ball is at height: " << newHeight << " meters." << std::endl;
        }
        else if(newHeight <= 0.0){
            std::cout << "At " << sec << " seconds, the ball is on the ground." << std::endl;
            return 0;
        }
        sec++;
    }  
}

float preHeight(){
    float height{};
    std::cout << "Enter ur house higt: ";
    std::cin >> height;
    return height;
}

float calculateDistance(int sec, float height){
    float newHeight{};
    newHeight = (height - (myConstant::gravity * sec * sec / 2.0f));
    return newHeight;
}