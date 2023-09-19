#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int count;
    cin >> count;

    int given_num_big = 0;
    int given_num_sm = 0;

    for(int i = 1; i <= count; i++) {
        cin >> given_num_big >> given_num_sm;

        if (given_num_big % given_num_sm == 0) {
            cout << 0 << endl;
        } else {
            cout << given_num_sm - (given_num_big % given_num_sm) << endl;
        }

    }
}