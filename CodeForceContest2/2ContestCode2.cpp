#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y, z;
        cin >> n >> x >> y >> z;

        int time_without_ai = (n + x + y - 1) / (x + y);

        int lines_done_during_setup = z * x;
        int time_with_ai;
        if (lines_done_during_setup >= n) {
            time_with_ai = z;
        } else {
            int remaining = n - lines_done_during_setup;
            int extra_time = (remaining + x + 10*y - 1) / (x + 10*y); 
            time_with_ai = z + extra_time;
        }

        cout << min(time_without_ai, time_with_ai) << endl;
    }
}