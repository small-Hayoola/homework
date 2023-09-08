#include "../stdcpp.h"
using namespace std;

int main() {
    // input variable
    int inp;
    cin >> inp;

    for(int n = 0; n < inp; n++) {
        // variables
        int star_num = (2 * n) + 1;
        int space_num = ((2 * inp) - 1 - star_num) / 2;
        
        // spaces before stars
        for (int m = 0; m < space_num; m++) {
           cout << "  ";
        }
        
        // stars
        for (int p = 0; p < star_num; p++) {
            cout << "* ";
        }

        cout << endl;
    }
}