#include <iostream>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long minVal = *min_element(a.begin(), a.end());
        long long total = 0;

        for (int i = 0; i < n; i++) {
            total += (a[i] - minVal);
        }

        cout << total << "\n";
    }
    return 0;
}
/*
InputCopy
5
5
1 2 3 4 5
6
1000 1000 5 1000 1000 1000
10
1 2 3 5 1 2 7 9 13 5
3
8 8 8
1
10000000
OutputCopy
10
4975
38
0
0

*/