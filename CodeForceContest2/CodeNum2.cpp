#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


const long long MOD = 676767677;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> dp(n + 1, LLONG_MAX);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            long long product = 1;
            for (int j = i; j >= 1; j--) {
                bool ok = true;
                for (int k = j; k < i; k++) {
                    if (a[k] > a[k + 1]) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) continue;

                product = 1;
                for (int k = j; k <= i; k++) {
                    product = (product * a[k]) % MOD;
                }
                if (dp[j - 1] != LLONG_MAX) {
                    dp[i] = min(dp[i], (dp[j - 1] + product) % MOD);
                }
            }
        }
        cout << dp[n] % MOD << "\n";
    }
}
