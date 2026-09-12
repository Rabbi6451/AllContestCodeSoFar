#include<iostream>
#include<vector> 
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    if (k < n || k > 2 * n - 1) {
        cout << -1 << "\n";
        return;
    }

    ll m = 2 * n - k;
    vector<vector<ll>> A(n + 1, vector<ll>(n + 1, 0));

    for (ll i = 1; i <= m; i++) A[i][i] = i;

    for (ll i = 1; i <= n - m; i++) A[m + i][1] = m + i;

    for (ll j = 1; j <= n - m; j++) A[1][m + j] = n + j;

    ll cur = k + 1;
    for (ll r = 1; r <= n; r++) {
        for (ll c = 1; c <= n; c++) {
            if (A[r][c] == 0) A[r][c] = cur++;
        }
    }

    for (ll r = 1; r <= n; r++) {
        for (ll c = 1; c <= n; c++) {
            cout << A[r][c] << " \n"[c == n];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}