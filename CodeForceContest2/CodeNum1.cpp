#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) swap(a[i], b[i]);
        }

        long long maxA = *max_element(a.begin(), a.end());
        long long sumB = accumulate(b.begin(), b.end(), 0LL);

        cout << maxA + sumB << "\n";
    }
}

