#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        long long target = sum / n;
        long long surplus = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            surplus += a[i] - target;
            if (surplus < 0) { 
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}