#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int h;

    cin >> n >> h;

    int width = 0;
    int made_num = 0;

    for (int i = 1; i <= n; i++) {

        cin >> made_num;

        if (made_num <= h) {
            width++;
        } else {
            width = width + 2;
        }
    }

    cout << width;
}