#include <iostream>
using namespace std;

bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int minwf;
        if (isPalindrome(s)) {
            minwf = 1;
        } else {
            bool found = false;
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == s[i+1]) { found = true; break; }
            }
            if (!found) {
                for (int i = 0; i < n - 2; i++) {
                    if (s[i] == s[i+2]) { found = true; break; }
                }
            }
            minwf = found ? 1 : 2;
        }
        cout << minwf << endl;
    }
    return 0;
}
