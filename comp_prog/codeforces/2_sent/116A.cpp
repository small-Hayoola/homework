#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int stops;
    cin >> stops;

    // global variables
    int max = 0;
    int pop = 0;

    for (int i = 1; i <= stops; i++) {
        int going;
        int coming;

        cin >> going >> coming;

        pop = pop + (coming - going);

        if (pop >= max) {
            max = pop;
        }

    }

    cout << max;

}