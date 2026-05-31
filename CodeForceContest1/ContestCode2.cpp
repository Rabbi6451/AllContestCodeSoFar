#include <iostream>
using namespace std;

bool check(const string &s, const string &target) {
    int n = s.size();
    int segments = 0;
    for (int i = 0; i < n; ) {
        if (s[i] != target[i]) {
            segments++;
            while (i < n && s[i] != target[i]) i++;
        } else {
            i++;
        }
    }
    return segments <= 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        string alt1, alt2;
        for (int i = 0; i < n; i++) {
            alt1 += (i % 2 == 0 ? 'a' : 'b');
            alt2 += (i % 2 == 0 ? 'b' : 'a');
        }

        if (check(s, alt1) || check(s, alt2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
