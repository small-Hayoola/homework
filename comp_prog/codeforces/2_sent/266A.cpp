#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int inp;
    string numbers;
    int main_deletions = 0;

    cin >> inp;
    cin >> numbers;

    // R R G

    for(int i = 1; i <= inp;) {
        int cur_num = numbers[i - 1];
        int b = i - 1;
        int deletions = 0;

        bool stop = 1;

        

        while (stop) {

            if (cur_num == numbers[b + 1]) {
                deletions++;
                b++;
            } else {
                stop = 0;
            }

        }


        main_deletions = main_deletions + deletions;
        i = i + deletions + 1;
        
    }   

    cout << main_deletions;
}