#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) { ok = false; break; }
    }

    if (ok) {
        long long ans = 0;
        for (int i = 0; i < n; i++) ans += a[i] - b[i];
        cout << ans << "\n";
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = c;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            cout << -1 << "\n";
            return;
        }
        ans += a[i] - b[i];
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}