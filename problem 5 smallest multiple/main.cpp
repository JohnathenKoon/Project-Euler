#include <iostream>

using namespace std;

int main() {
    int limit = 20;
    int smallest_multiple=1;

    for(int b = 1;b<=limit;b++){
        if(smallest_multiple%b!=0){
            smallest_multiple++;
            b = 1;
        }else if(smallest_multiple%b==0){
            if(b==20){
                cout << smallest_multiple << endl;
            }
        }
    }

    return 0;
}