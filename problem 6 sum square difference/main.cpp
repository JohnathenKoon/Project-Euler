#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed;
    cout << setprecision(0);
    double sum_squares=0;
    double square_sums=0;
    int limit = 100;

    for(int b = 1; b <= limit; b++){
        sum_squares += pow(b,2);
        square_sums += b;
        //cout << "b: " << b << " sum squares: " << sum_squares << " square sums: " << square_sums << endl;
    }
    square_sums = pow(square_sums,2);
    cout << square_sums << " " << sum_squares << endl;
    cout << square_sums - sum_squares << endl;

    return 0;
}