#include <iostream>
#include <cmath>

int main() {

//    int a = 1;
//    int b = 1;
//    int c = 1;

    double pythag_triplet;

    for(int a = 1; a <= 1000; a++){
        for(int b = a; b <= 1000; b++){
            for(int c = b; c <= 1000; c++){
                if(pow(a,2)+pow(b,2) == pow(c,2)){
                    pythag_triplet = a+b+c;
                    if(pythag_triplet == 1000){
                        std::cout << a << " " << b << " " << c << " " << pythag_triplet << std::endl;
                    }
                }
            }
        }
    }



    return 0;
}