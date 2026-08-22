#include <iostream>
#include <vector>
using namespace std;

// bool isPalindrome(const string &s) {
//     int l = 0, r = s.size() - 1;
//     while (l < r) {
//         if (s[l] != s[r]) return false;
//         l++; r--;
//     }
//     return true;
// }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 2 * n - 2;
        vector<string> strs(cnt);
        for (auto &s : strs) cin >> s;

        int maxlen = n - 1;
        vector<string> cands;
        for (auto &s : strs)
            if ((int)s.size() == maxlen)
                cands.push_back(s);

        string a = cands[0], b = cands[1];
        reverse(b.begin(), b.end());

        cout << (a == b ? "YES" : "NO") << "\n";
    }
    return 0;
}