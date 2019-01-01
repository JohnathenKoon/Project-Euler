#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    vector<int> all_nums;
    int sum = 0;
    for(int b = 1; b < 1000; b++){
        all_nums.push_back(b);
    }

    // using a lambda function to remove vector elements which are not multiples of 3 or 5
    all_nums.erase(remove_if(all_nums.begin(), all_nums.end(), [](int b){
        if(b % 3 != 0 && b % 5 != 0){
            return true;
        }
        return false;
    }), all_nums.end());

    //adding new vector
    for (int e : all_nums) {
        sum += e;
    }
    cout << sum << endl;


    return 0;
}