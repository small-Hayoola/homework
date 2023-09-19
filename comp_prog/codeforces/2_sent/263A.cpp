#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int x = 0;
    int max_num;

    for (int i = 1; i <= 5; i++) {

        for (int b = 1; b <= 5; b++) {

            cin >> x;

            if(x == 1) {

                max_num = ((b <= 3) * (3 - b)) + ((b > 3) * (b - 3));
                max_num = (max_num) + ((i <= 3) * (3 - i)) + ((i > 3) * (i - 3));

            }

        }

    }

    cout << max_num;

}