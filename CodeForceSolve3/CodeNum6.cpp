#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    if (n == 1) {
        cout << a[0] << "\n";
        return;
    }
    int min_idx = min_element(a.begin(), a.end()) - a.begin();
    vector<int> b;
    for (int i = 0; i < n; i++) b.push_back(a[(min_idx + i) % n]);
    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i - 1]) {
            cout << -1 << "\n";
            return;
        }
    }
    vector<int> result(n);
    int diff = b[1] - b[0];
    if (diff == 1) {
        for (int i = 0; i < n; i++) result[i] = b[(i - 1 + n) % n];
    } else {
        for (int i = 0; i < n; i++) result[i] = b[(i + 1) % n];
    }

    for (int i = 0; i < n; i++) cout << result[i] << (i + 1 == n ? "\n" : " ");
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
