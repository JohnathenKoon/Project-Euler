#include <iostream>
#include <vector>

int main() {
    int limit = 10;
    int add = 0;
    int n = 500;
    int tri_num = 0;
    int divisible = 1;
    int counter = 0;
//    std::vector<std::vector<int>> tri(n, std::vector<int> (limit+1));
//    std::vector<std::vector<int>> tri;
    std::vector<int> tri;

    for(int b = 1; counter != 500; b++){
        tri_num += b;
        //tri[0][b] = tri_num;
        for(int c = 1; c<= tri_num; c++){
            if(tri_num % c == 0){
                counter++;
//                divisible = c;
//                tri[c-1][b-1] = divisible;
                tri.push_back(c);
//                std::cout << counter << std::endl;


            }
//            std::cout << tri_num << " " << tri[c-1][b-1] << " ";

        }
//        std::cout << std::endl;
        if(counter >= 500){
            for(int e : tri){
                std::cout << e << " ";
            }
            exit(0);
        }else{
            tri.erase(tri.begin(), tri.end());
            counter = 0;
        }
    }
//    for (auto &i : tri) {
//        for(auto &j : i){
//            std::cout << j << " ";
//        }
//        std::cout << std::endl;
//    }
//    std::cout << counter << std::endl;

//    std::vector<int> tri;
//
//    for(int b = 1; b <= limit; b++){
//        tri_num += b;
//        //tri[0][b] = tri_num;
//        for(int c = 1; c<= tri_num; c++){
//            if(tri_num % c == 0){
//                tri.push_back(c);
//                counter++;
//            }
//
////            std::cout << tri_num << " " << tri[c-1][b-1] << " ";
//
//        }
////        std::cout << std::endl;
//    }
//    for(int e : tri){
//        std::cout << e << " ";
//    }


    // i need to find the factors of the triangle numbers instead of the b++ numbers 1,2,3,4,5...
    // i need to fine the factors of 1,3,6,10...





    return 0;
}