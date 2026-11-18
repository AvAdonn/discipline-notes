#include <iostream>

struct Advertising{
    int shows;
    int click;
    double dengi;
};

void showStruct(Advertising ok);

int main(void){
    Advertising newTry;

    std::cout << "Enter a shows: "; 
    std::cin >> newTry.shows;
    std::cout << "\n" << "Enter a click: ";
    std::cin >> newTry.click;
    std::cout << "\n" << "Enter a dengi count: ";
    std::cin >> newTry.dengi;

    std::cout << "All profit: " << newTry.click * newTry.shows * newTry.dengi;
}

void showStruct(Advertising ok){
    using namespace std;
    cout << " Shows" << ok.shows << "\n";
    cout << "Click " << ok.click << "\n";
    cout << "Dengi " << ok.dengi << "\n"; 
}