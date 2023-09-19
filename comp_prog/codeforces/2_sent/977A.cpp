#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // inp vars
    int main_num;
    int tanyas_times;

    cin >> main_num >> tanyas_times;

    for (int i = 1; i <= tanyas_times; i++) {
        
        if (main_num % 10 == 0) {
            main_num = main_num / 10;
        } else {
            main_num = main_num - 1;
        }

    }

    cout << main_num;
}