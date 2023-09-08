#include "../stdcpp.h"
using namespace std;

int main() {
    // inp variables
    int n,h;
    cin >> n >> h;

    // g variables
    int width = (n*h) - 1;

    for (int a = 1; a <= width; a++) {
        for (int b = 1; b <= width; b++) {
            int c = 2;

            if (a == 1) {
                cout << "* ";
            } else if (b > 1) {
                // too b avali nistim

                if (((c*(h - 1)) - 1) == b) {
                    c++;
                    cout << "* ";
                } else if ((((a - 1) / h) % 2) > 0) {
                    // too satr aye fard hastim 
                    //cout << "  ";
                }
            } else {
                // too b avali hastim
                
            }
        }

        cout << endl;
        // inja endl mikhore
    }
}