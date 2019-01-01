#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 0;
    int total = 0;
    int big = 4000000;

    while(a < big && b < big){
        c = a + b;
        if(c%2==0){
            total += c;
        }
        a = b;
        b = c;
    }

    // extremly cheaty way of adding the initial b value
    cout << total+2 << endl;


    return 0;
}