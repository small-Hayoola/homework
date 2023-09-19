#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int line_count;
    cin >> line_count;

    // g variables
    int answer_count = 0;

    for (int a = 1; a <= line_count; a++) {
        int first_n;
        int sec_n;
        int third_n;
        int sum;

        cin >> first_n >> sec_n >> third_n;

        sum = first_n + sec_n + third_n;

        if (sum >= 2) {
            answer_count = answer_count + 1;

        }
    }

    cout << answer_count;
}