#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string both_hands;
    vector<vector<string>> p1;
    vector<vector<string>> p2;

    ifstream poker_file;
    poker_file.open("poker.txt", fstream::app);

    while(poker_file){
        for(int row = 0; row<=999; row++) {
            for (int col = 0; col <= 9; col++) {
                cout << "big gay " << row << " " << col << endl;

                if (col <= 4) {
                    poker_file >> p1[row][col];
                    cout << p1[row][col] << " ";
                }else if(col >4 && col<=9){
                    poker_file >> p2[row][col];
                    cout << p2[row][col] << " ";

                }
            }
            cout << endl;
        }
        cout << both_hands << endl;
    }

    poker_file.close();
    return 0;
}