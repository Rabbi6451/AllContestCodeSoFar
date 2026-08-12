#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int cost_no_reorder = 0;
    bool possible_no_reorder = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            possible_no_reorder = false;
            break;
        }
        cost_no_reorder += (a[i] - b[i]);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cost_with_reorder = 0;
    bool possible_with_reorder = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            possible_with_reorder = false;
            break;
        }
        cost_with_reorder += (a[i] - b[i]);
    }
    if (possible_with_reorder) cost_with_reorder += c;

    if (!possible_no_reorder && !possible_with_reorder) {
        cout << -1 << "\n";
    } else if (possible_no_reorder && possible_with_reorder) {
        cout << min(cost_no_reorder, cost_with_reorder) << "\n";
    } else if (possible_no_reorder) {
        cout << cost_no_reorder << "\n";
    } else {
        cout << cost_with_reorder << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
