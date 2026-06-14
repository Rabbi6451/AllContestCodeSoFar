#include<iostream>
#include <numeric>

using namespace std;

int mygcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            for (int len = 2; len <= 4; len++) {
                if (i + len <= n) {
                    int mn = p[i], mx = p[i];
                    int g = p[i];
                    for (int j = i; j < i + len; j++) {
                        mn = min(mn, p[j]);
                        mx = max(mx, p[j]);
                        g = mygcd(g, p[j]);
                    }
                    if (mx - mn == g) ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}