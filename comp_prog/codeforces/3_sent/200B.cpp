#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double count;
    cin >> count;

    long long cur_num = 0;
    long long sum = 0;

    for(int i = 1; i <= count; i++) {
        cin >> cur_num;
        sum = sum + cur_num;
    }

    double last = sum;
    cout << last/count;
}