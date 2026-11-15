#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 4) {
            cout << -1 << "\n";
            continue;
        }
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) p[i] = i;
        swap(p[1], p[4]);
        for (int i = 1; i <= n; i++) cout << p[i] << " ";
        cout << "\n";
    }
}