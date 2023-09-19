#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,m,a;
    cin >> n >> m >> a;

    cout << ( (((n%a) == 0) * (n/a)) + ((n%a > 0) * ((n/a) + 1)) ) * ( (((m%a) == 0) * ((m/a))) + ((m%a > 0) * ((m/a) + 1)) );
}