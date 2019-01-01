#include <iostream>

int main() {
    long int limit = 2000000;
    long long int prime_sum = 0;

    for(int b = 2; b < limit; b++){
        for(int c = 2; c < limit; c++){
            if(b%c == 0){
                break;
            }
            if(b%c != 0 && b != c){
                if(c == (b-1)){
                    prime_sum += b;
                    std::cout << b << " " << c << " " << prime_sum << std::endl;
                }
            }
        }
    }
    std::cout << prime_sum << std::endl;


    return 0;
}