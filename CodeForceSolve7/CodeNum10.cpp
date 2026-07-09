#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        a.insert(a.begin(), 0);
        a.push_back(1440);

        int cnt120 = 0;
        bool ok = false;
        for (int i = 1; i < (int)a.size(); i++) {
            int gap = a[i] - a[i-1];
            if (gap >= 240) ok = true;
            else if (gap >= 120) cnt120++;
        }
        if (ok || cnt120 >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
}