#include <iostream>


int test(void);
int test_3(int);

int main(){
    test();
    //test_2(5); викликана але не оголошена
    //test_3(5); без прототипу
}

int test_(int x){
    int y = x; 
}

int test_2(int x){
    return x;
} 