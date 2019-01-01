#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    for( int b = 0; b < 10; b++){
        nums.push_back(b);
    }
    for(int e : nums){
        std:: cout << e << std::endl;
    }



    return 0;
}