#include <iostream>
#include <vector>

int main() {
    int limit = 7;
    int add = 0;
//    std::vector<std::vector<int>> triangles(0);
//
//    for(int b = 1; b<=limit; b++){
//        add += b;
//        triangles[0][b] = add;
//        std:: cout << triangles[0][b];
//        add = 0;
//    }
    std::vector<int> tri(limit);
    for(int b = 0; b<limit; b++){
        add += b;
        tri[b] = add;

        std:: cout << tri[b];

        add = 0;
    }

//    for(int b = 1; b<=limit; b++){
//
//    }


    return 0;
}