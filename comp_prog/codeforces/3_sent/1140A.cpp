#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int pages;
    int cur_given_num = 0;
    cin >> pages;

    int biggest_unanswered = 0;
    int days = 0;

    for (int i = 1; i <= pages; i++) {
        cin >> cur_given_num;

        if (cur_given_num >= biggest_unanswered) {
            biggest_unanswered = cur_given_num;
        }

        if (i == biggest_unanswered) {
            days++;
        }
    }

    cout << days;
}