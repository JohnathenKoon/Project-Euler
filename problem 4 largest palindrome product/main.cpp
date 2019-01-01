#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int max = 1000;
    int largest = 0;
    for(int a = 1; a<max; a++){
        for(int b = 1; b<max; b++){
            int c = a*b;
            string s = to_string(c); //https://stackoverflow.com/questions/5590381/easiest-way-to-convert-int-to-string-in-c
            string backwords;
            for(int i = s.size()-1; i >= 0; i--) {
                backwords += s[i];
            }
            if(backwords == s){
                int *cptr = &c;
                if(*cptr>largest){
                    largest = *cptr;
                    cout << *cptr << endl;
                }
            }
        }
    }

    return 0;
}