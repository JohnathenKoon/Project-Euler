#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
//#include <Windows.h>
#include <cstdio>



int main() {
    std::ifstream number;
    number.open("num.txt", std::fstream::app);

    int temp;
    std::vector<std::vector<int>> series;


    for(int r = 0; r < 50; r++){
        series.emplace_back();
        for(int c = 0; c < 20; c++){
            number >> temp;
            std::cout<< temp << " ";
//            series[c].push_back(temp);
//            cout << series[r][c] << " ";
        }
        std::cout << std::endl;
    }




    number.close();
    return 0;
}

//number >> series;
//cout << series << endl;
//size_t found = series.find("0");
//series.erase(found-(adj_digits-1), (adj_digits * 2)-1);
//    series.erase(series[e] - (adj_digits-1), series[e] + (adj_digits-1));
//    series.erase(series.begin()-(e-adj_digits), series.begin()-(e+adj_digits) || s);

//int adj_digits = 4;
//    int temp;
//    vector<int> series;
//    int found;
//    long long int product = 1;
//    long long int largest_product = 0;
//    int count = 1;

//cout << largest_product << endl;
//basically, i need to delete the numbers around the index of 0, but make sure they are out of range of the vector
//    for(int e = 0; e<1000; e++){
//        if(series[e] == 0){
//            series.erase(series.begin()+(e-adj_digits), series.begin()+(e+adj_digits));
//        }
//    }
//    int count = 0;
//    for(int b : series){
//        count++;
//        cout << b << " " << count << endl;
//    }

//    while(series.find("0")){
//        size_t found = series.find("0");
//        series.erase(found-(adj_digits-1), (adj_digits * 2)-1);
//        cout << endl;
//        cout << series << endl;
//    }


//    cout << series << endl;

// wont work because it will replace all nums > e. need to find nums in a line
//    for(int e : series){
//        if(temp > e){
//            series.push_back(temp);
//            cout << temp << endl;
//        }
//    }

// HOLY FUCK FINALLY https://www.quora.com/How-do-I-read-data-from-a-file-using-a-vector-in-C
//    while(number>>temp){
//        series.push_back(temp);
//    }
//    cout << series.size() << endl;
//    for(int b = 0; b<(series.size()/10); b++){
//        cout << b << endl;
//        for(int c = 0; c<=adj_digits; c++){
////            cout << series[b+c] << " series[b+c]" << endl;
//            product *= series[b+c];
//            cout << product << endl;
//            if(product > largest_product){
//                largest_product = product;
//                product = 1;
//            }
//        }
//    }