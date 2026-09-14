#include<iostream>
#include<vector> 
#include<algorithm>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> diff(n + 2, 0);

    for (int k = 1; k <= n; k++) {
        ll l = a[k] * (ll)k;
        if (l < n) {
            ll r = min((ll)n - 1, l + k - 1);
            diff[l] += 1;
            diff[r + 1] -= 1;
        }
    }

    vector<int> B;
    B.reserve(n);
    int cov = 0;
    for (int i = 0; i < n; i++) {
        cov += diff[i];
        if (cov == 0) B.push_back(i);
    }

    cout << B.size() <<endl;
    for (size_t i = 0; i < B.size(); i++) {
        cout << B[i];
        if (i + 1 < B.size())cout <<" ";
    }
    cout <<endl;
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