#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int answered;
    cin >> answered;

    int ask = 0;
    bool hard = 0;


    for(int i = 1; i <= answered; i++) {
        cin >> ask;

        if (ask == 1) {
            hard = 1;
        }
    }

    if (hard == 1) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }
}