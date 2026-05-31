#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> w(n);
        int c0 = 0, c1 = 0, c2 = 0;

        for (int i = 0; i < n; ++i) {
            cin >> w[i];
            if (w[i] == 0) c0++;
            else if (w[i] == 1) c1++;
            else c2++;
        }

        int ops = c0;

        int pairs = min(c1, c2);
        ops += pairs;

        int left1 = c1 - pairs;
        int left2 = c2 - pairs;

        ops += left1 / 3;
        ops += left2 / 3;

        cout << ops << endl;
    }
}   