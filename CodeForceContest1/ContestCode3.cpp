#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string top, bottom;
        cin >> top >> bottom;

        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            int cost = (top[i - 1] != bottom[i - 1]);
            dp[i] = dp[i - 1] + cost;

            if (i >= 2) {
                int cost2 = (top[i - 1] != top[i - 2]) +
                            (bottom[i - 1] != bottom[i - 2]);
                dp[i] = min(dp[i], dp[i - 2] + cost2);
            }
        }

        cout << dp[n] << '\n';
    }

    return 0;
}