#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int count;
    cin >> count;

    string magn_pa = "  ";
    string magn_th = "  ";

    bool in_group = 0;
    int group_count = 0;

    for(int i = 1; i <= count; i++) {
        cin >> magn_th;

        if(i == 1) {
            magn_pa[0] = magn_th[0];
            magn_pa[1] = magn_th[0];
        }

        if(in_group == 1) {
            
            if (magn_th[0] == magn_pa[1]) {
                group_count++;
                in_group = 0;
                magn_pa = magn_th;
                magn_th = "  ";
            } else {
                magn_pa = magn_th;
                magn_th = "  ";
            }

        } else {

            if (magn_th[0] == magn_pa[1]) {
                group_count++;
                magn_pa = magn_th;
                magn_th = "  ";
            } else {
                in_group = 1;
                magn_pa = magn_th;
                magn_th = "  ";
            }

        }
    }

    cout << group_count;
}