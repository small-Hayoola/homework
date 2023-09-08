#include "../stdcpp.h"
using namespace std;

int main() {
    int n,h;
    cin >> n >> h;

    for (int i = 0; i < h*n + 1; i++) {
        for (int j = 0; j < h*n + 1; j++) {
            if ((((i % (2*h))) <= h) == (((j % (2*h)) <= h))) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }
}