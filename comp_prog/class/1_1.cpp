#include "../stdcpp.h"
using namespace std;

int main() {
    int inp;
    cin >> inp;

    for (int n = 1; n <= inp; n++) {
        for (int m = 0; m < n; m++) {
            cout << '*' << " ";
        }
        cout << endl;
    }
}