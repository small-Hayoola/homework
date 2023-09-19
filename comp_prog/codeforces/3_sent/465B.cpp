#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int count;
    cin >> count;

    int last_num = 0;
    int cur_num = 0;

    int out = 0;

    bool have_seen = 0;

    for(int i = 1; i <= count; i++) {
        cin >> cur_num;

        if (i == 1) {
            last_num = cur_num;
        }

        if (last_num == cur_num && last_num == 1) {
            out++;
            have_seen = 1;
        } else if (cur_num == 1 && last_num == 0) {
            
            if (have_seen == 1) {
                out = out + 2;
            } else {
                have_seen = 1;
                out++;
            }
        }

        last_num = cur_num;
    }

    cout << out;
}