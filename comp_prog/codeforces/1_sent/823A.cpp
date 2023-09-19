#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; // number of sticks drawn by sasha
    int k; // number of sticks to be corssed out each turn
    cin >> n >> k;
    

    if (((n/k) % 2) == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}