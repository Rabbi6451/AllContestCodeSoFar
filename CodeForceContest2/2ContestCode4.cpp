#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        
        int mn = a[0];
        long long ans = a[0];
        for (int i = 1; i < n; i++) {
            mn = min(mn, a[i]);
            ans += mn;
        }
        cout << ans << "\n";
    }
}
// 10
// 3
// 1 3 5
// 3
// 5 4 3
// 4
// 3 2 5 1
// 4
// 2 1 4 3
// 5
// 4 1 3 5 2
// 5
// 2 2 3 1 4
// 1
// 7
// 6
// 6 1 5 2 4 3
// 4
// 1 1 1 1
// 5
// 10 3 8 6 9
// OutputCopy
// 3
// 12
// 8
// 5
// 8
// 8
// 7
// 11
// 4
// 22