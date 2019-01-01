#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // start by finding the next lowest prime number
    // divid by that number and if the number is whole, repeat

    // 6857 is the number
    long long int num = 600851475143;
    vector<long long int> vec;

    for(long long int b = 2; b < num; b++){
        if(num%b==0){
            vec.push_back(b);
            cout << b << endl;

            // could simplify by checking HERE if any of the numbers are factors of previous primes
        }
    }
    vec.erase(remove_if(vec.begin(), vec.end(), [vec](long long int b){
        for(int c : vec){
            if(b!=c && b%c==0){
                cout << "t" << endl;
                return true;
            }
        }
        cout << "f" << endl;
        return false;
    }), vec.end());

    for(long long int e:vec){
        cout << e << endl;
    }
    return 0;
}
// primes are difficult to find because more and more #s include primes numbers