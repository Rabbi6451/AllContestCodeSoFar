#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < k; i++) {
        int onesCount = 0;
        for (int j = i; j < n; j += k) {
            if (s[j] == '1') onesCount++;
        }
        if (onesCount % 2 != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
