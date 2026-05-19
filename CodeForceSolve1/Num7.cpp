#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& a) {
    for (int i = 1; i < (int)a.size(); i++) {
        if (a[i] < a[i-1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (isSorted(a)) {
            cout << "YES\n";
            continue;
        }

        bool hasEven = false, hasOdd = false;
        for (int x : a) {
            if (x % 2 == 0) hasEven = true;
            else hasOdd = true;
        }

        if (hasEven && hasOdd) cout << "YES\n";
        else cout << "NO\n";
    }
}
