#include<iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k >= n) {
            cout << n <<endl;
        } else {
            long long bits = (long long)log2(n) + 1;
            long long ans = min(n, k * bits);
            cout << ans <<endl;
        }
    }
}
