#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long x, y, a; 
        cin >> x >> y >> a;
        long long T = a + 1, lo = 1, hi = 2e9+10;

        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            long long val = (mid % 2 == 0) ? (mid/2)*(x+y) : ((mid-1)/2)*(x+y) + x;
            if (val >= T) hi = mid;
            else lo = mid + 1;
        }
        cout << (lo % 2 ? "NO" : "YES") << "\n";
    }
}
