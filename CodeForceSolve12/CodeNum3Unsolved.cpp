#include <iostream>
using namespace std;

long long depthDugAfterDay(long long day, long long x, long long y) {
    long long completePairs = day / 2;
    long long total = completePairs * (x + y);
    if (day % 2 == 1) {
        total += x;
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

        long long target = a + 1;
        long long lo = 1;
        long long hi = 2e9 + 10;

        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            long long dugSoFar = depthDugAfterDay(mid, x, y);

            if (dugSoFar >= target) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }

        long long winningDay = lo;
        bool isBsDay = (winningDay % 2 == 1);
        cout << (isBsDay ? "NO" : "YES") << "\n";
    }

    return 0;
}