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

        sort(a.begin(), a.end());

        int ans = n; 
        int l = 0;
        for (int r = 0; r < n; r++) {
            while (a[r] - a[l] >= (r - l + 1)) {
                l++;
            }
            ans = min(ans, n - (r - l + 1));
        }
        cout << ans << "\n";
    }
}