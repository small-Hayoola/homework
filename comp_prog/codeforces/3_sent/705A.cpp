#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int count;
    cin >> count;

    cout << "I ";

    for(int i = 1; i <= count; i++) {
        
        if(i % 2 == 0) {
            cout << "love ";
        } else {
            cout << "hate ";
        }

        if (i == count) {

        } else {
            cout << "that I ";
        }
    }

    cout << "it";
}