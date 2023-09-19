#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int inp;
    cin >> inp;
    
    int five_steps = (inp>=5) * (inp/5);
    int four_steps = (((inp - (5*five_steps)) >= 4) * (inp - (5*five_steps)) / 4);
    int triple_steps = ((inp - ((5*five_steps) + (4*four_steps))) >= 3) * ((inp - ((5*five_steps) + (4*four_steps))) / 3);
    int double_steps = ((inp - ((5*five_steps) + (4*four_steps) + (3*triple_steps))) >= 2) * ((inp - ((5*five_steps) + (4*four_steps) + (3*triple_steps) )) / 2);
    int one_steps = ((inp - ((5*five_steps) + (4*four_steps) + (3*triple_steps) + (2*double_steps) )));
    cout << (five_steps + four_steps + triple_steps + double_steps + one_steps);
}