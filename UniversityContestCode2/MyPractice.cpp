#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<int> t(b);
        for (int i = 0; i < b; i++) {
            cin >> t[i];
        }
        sort(t.begin(), t.end());

        bool duplicate = false;
        for (int i = 0; i < b - 1; i++) {
            if (t[i] == t[i + 1]) {
                duplicate = true;
                break;
            }
        }

        if (duplicate) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
