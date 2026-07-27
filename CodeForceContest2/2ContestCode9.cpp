#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long S = a + 2*b + 3*c;

        if (S % 2 == 1) {
            cout << 1 << "\n";
        } else {
            if (a == 0 && c == 0 && (b % 2 == 1)) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}
