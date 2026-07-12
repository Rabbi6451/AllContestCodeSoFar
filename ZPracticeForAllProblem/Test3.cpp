#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool allSame = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                allSame = false;
                break;
            }
        }

        if (s.size() == 1 || allSame) {
            cout << 0 << endl;
        } else {
            cout << s.size() << endl;
        }
    }
    return 0;
}
