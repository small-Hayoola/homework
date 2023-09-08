#include "../stdcpp.h"
using namespace std;

int main() {
    // inp variables
    int n,h;
    cin >> n >> h;

    // g variables
    int width = (n*h) - 1;


    // doc e variable ha
    // a => bala be payin (n)
    // d => bala be payin (h)
    // b => rast be chap (n)
    // c => rast be chap (h)


    // for baraye bala be payin az n
    for (int a = 1; a <= n; a++) {

        // for baraye bala be payin ba estefade az h 
        for (int d = 1; d <= h; d++) {

            // for bararye rast be chap ba estefade az n baraye koli mokaba
            for (int b = 1; b <= n; b++) {
                // for baraye rast be chap ba estefade az h baraye har moraba
                for (int c = 1; c <= h; c++) {
                    
                    // ghermez ya siah boodan normal

                    if (a % 2 > 0) {
                        if ((a > 1) and (d == 1)) {
                            // koli
                            if (b % 2 > 0) {
                                if ((b > 1) and (c == 1)) {
                                    // ghabli 
                                } else {
                                    // ghabli chizi naboode
                                    cout << "* ";
                                }
                            } else {
                                cout << "  ";
                            }
                        } else {
                            if (b % 2 > 0) {
                                if ((b > 1) and (c == 1)) {
                                    // ghabli 
                                } else {
                                    // ghabli chizi naboode
                                    cout << "* ";
                                }
                            } else {
                                cout << "  ";
                            }
                        }
                    } else {
                        // a hatman zoje pas too avali nistim
                        if (b % 2 > 0) {
                                if ((b > 1) and (c == 1)) {
                                    // ghabli 
                                } else {
                                    // ghabli chizi naboode
                                    cout << "  ";
                                }
                            } else {
                                cout << "*  ";
                            }
                    }

                }
            }

            cout << endl;

        }


        
        
        // inja cout endl e
    }
    
}