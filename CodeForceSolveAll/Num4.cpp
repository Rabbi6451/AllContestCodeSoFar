#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int open = 0, close = 0;
        for (char ch : s) {
            if (ch == '(') open++;
            else close++;
        }

        if (open == close && !(open == n || close == n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
