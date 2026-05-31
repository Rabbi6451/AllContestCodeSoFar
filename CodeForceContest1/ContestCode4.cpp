#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = n - 2; i >= 0; i--) {
            if (a[i+1] > 0) {
                a[i] += a[i+1];
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) count++;
        }
        cout << count << endl;
    }
    return 0;
}   