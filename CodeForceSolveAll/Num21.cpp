#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        long long b, c, d;
        cin >> b >> c >> d;

        long long individual_cost = b * c;

        long long groups = b / 3;
        long long remainder = b % 3;
        long long group_cost = groups * d + remainder * c;

        long long min_cost = individual_cost;
        if (group_cost < min_cost) {
            min_cost = group_cost;
        }


        cout << min_cost << endl;
    }
    return 0;
}   