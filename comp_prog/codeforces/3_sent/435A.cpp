#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int groups;
    int bus_oc;

    cin >> groups >> bus_oc;

    int cur_group = 0;
    int cur_pop = 0;

    int out = 0;

    for (int i = 1; i <= groups; i++) {
        cin >> cur_group;

        if ((cur_pop + cur_group) <= bus_oc) {
            cur_pop = cur_pop + cur_group;
        } else {
            cur_pop = cur_group;
            out++;
        }


        if (i == groups) {
            out++;
        }
        
    }

    cout << out;
}