#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << std::fixed;
    std::cout << std::setprecision(0);

    int exp = 1000;
    long double num = pow(2,exp);
    int add = 0;

    while(num!=0){
        if(num<1){
            break;
        }
        add += floor(fmod(num,10));
        num /= 10;
        std::cout << num << " " << add << std::endl;


    }
    std::cout << add;

    return 0;
}