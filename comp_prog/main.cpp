#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int res;
    cin >> n;
    for (int i = 0; i < n; i++) {
        res = res*(i+1);
    }

    cout << res << endl;
}