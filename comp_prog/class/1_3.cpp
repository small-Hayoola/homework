#include "../stdcpp.h"
using namespace std;

int main() {
    // inp variables
    int n;
    int h;
    cin >> n >> h;

    // g variables
    int width = n * h ;

    // for amoodi n
    for (int m = 1; m <= n; m++) {

            // for 3 tayi ha
            for (int a = 1; a <= h; a++) {

                // for circle ha (n i ofoghi)
                for (int c = 1; c <= n; c++) {
                    
                    for (int b = 1; b <= h; b++) {

                        if (m % 2 > 0) {
                            if ((c % 2) > 0) {
                                cout << "* ";
                            } else {
                                cout << "  ";
                            }
                        } else {
                            if ((c % 2) > 0) {
                                cout << "  ";
                            } else {
                                cout << "* ";
                            }
                        }
                        

                    }   

                    if (c == n) {
                        cout << endl;
                    }
                }
            
            }
    }
}