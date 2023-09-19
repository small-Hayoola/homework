#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k,n,w;
    cin >> k>>n>>w;
    
    int sum_bananas = (((w) * (w+1)) / 2) * k;
    cout << ((sum_bananas > n) * ((sum_bananas) - n));
}