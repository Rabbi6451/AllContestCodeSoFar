#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> c(N+1);
    for (int i = 1; i <= N; i++) cin >> c[i];

    vector<vector<int>> dp(N+2, vector<int>(N+2, 0));

    for (int i = 1; i <= N; i++) dp[i][i] = 1;

    for (int len = 2; len <= N; len++) {
        for (int l = 1; l + len - 1 <= N; l++) {
            int r = l + len - 1;
            dp[l][r] = 1 + dp[l+1][r];
            dp[l][r] = min(dp[l][r], 1 + dp[l][r-1]);

            for (int k = l+1; k <= r; k++) {
                if (c[l] == c[k]) {
                    dp[l][r] = min(dp[l][r], dp[l+1][k-1] + dp[k][r]);
                }
            }
        }
    }

    cout << dp[1][N] << "\n";
}
