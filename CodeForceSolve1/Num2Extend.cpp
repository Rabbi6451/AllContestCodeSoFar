#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int current = 0, maxBlank = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                current++;
                maxBlank = max(maxBlank, current);
            } else {
                current = 0;
            }
        }

        cout << maxBlank << endl;
    }
}
