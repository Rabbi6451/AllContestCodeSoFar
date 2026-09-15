#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int easyCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] == 0) easyCount++;
    }

    if (easyCount < 2) {
        cout << -1 << endl;
        return;
    }
    if (p[0] == 0 && p[n-1] == 0) {
        cout << 0 << endl;
        return;
    }
    if (p[0] == 0 || p[n-1] == 0) {
        cout << 1 <<endl;
        return;
    }
    cout << 2 <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
