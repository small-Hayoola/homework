#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long regular_customer_count;
    long long time_at_work;
    long long smoke_breaks_time;

    cin >> regular_customer_count >> time_at_work >> smoke_breaks_time;

    int last_arrive_and_time = 0;

    int customer_arriv = 0;
    int customer_time = 0;

    // outpot
    int out = 0;

    for(int i = 1; i <= regular_customer_count; i++) {
        cin >> customer_arriv >> customer_time;

        if ((customer_arriv - last_arrive_and_time) >= smoke_breaks_time) {
            out = out + ((customer_arriv - last_arrive_and_time) / smoke_breaks_time);
            last_arrive_and_time = customer_arriv + customer_time;
        } else {
            last_arrive_and_time = customer_arriv + customer_time;
        }
    }

    cout << out + (time_at_work - last_arrive_and_time)/smoke_breaks_time;
}