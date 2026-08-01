#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int count = 0;
        for (int i = 0; i + 1 < n; i++) {
            int diff = abs(p[i] - p[i+1]);
            int g = gcd(p[i], p[i+1]);
            if (g == diff) count++;
        }
        cout << count << endl;
    }
}