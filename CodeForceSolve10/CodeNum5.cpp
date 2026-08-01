#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k >= n) {
            cout << n << "\n";
            continue;
        }

        long long ans = 0;
        long long remaining = n;

        while (remaining > 0 && k > 0) {
            long long block = 1;
            while ((block << 1) - 1 <= remaining) {
                block <<= 1;
            }
            block--;

            ans += __builtin_popcountll(block);
            remaining -= block;
            k--;
        }

        cout << ans << "\n";
    }
}
