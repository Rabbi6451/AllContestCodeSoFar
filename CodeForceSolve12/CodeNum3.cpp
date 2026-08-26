#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;
        long long target = a * 5;

        long long cycles = target / (x + y);

        long long dug = cycles * (x + y);

        if (dug >= target) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}

