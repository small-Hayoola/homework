#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int count;
    cin >> count;

    int cap = 0;
    int ppl = 0;

    int pos_count = 0;


    for (int i = 1; i <= count; i++) {
        cin >> ppl >> cap;

        if ((cap - ppl) >= 2) {
            pos_count++;
        }
    }

    cout << pos_count;
}