#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // test case সংখ্যা

    while (t--) {
        long long a[4];
        for (int i = 0; i < 4; i++) cin >> a[i];

        int idx1 = 0, idx2 = 1;
        long long maxDist = abs(a[0] - a[1]);

        // সব pair check করা
        for (int i = 0; i < 4; i++) {
            for (int j = i+1; j < 4; j++) {
                long long dist = abs(a[i] - a[j]);
                if (dist > maxDist) {
                    maxDist = dist;
                    idx1 = i;
                    idx2 = j;
                }
            }
        }

        // ছোট index আগে, বড় index পরে
        if (idx1 > idx2) swap(idx1, idx2);

        cout << idx1 << "\n" << idx2 << "\n";
    }

    return 0;
}
