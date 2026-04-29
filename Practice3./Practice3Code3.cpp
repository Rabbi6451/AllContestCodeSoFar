#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    for (size_t i = 0; i < s.size();) {
        if (s[i] == '.') {
            ans += '0';
            i++;
        } else {
            if (i + 1 < s.size() && s[i+1] == '.') {
                ans += '1';
                i += 2;
            } else {
                ans += '2';
                i += 2;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
