#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        string s;
        cin >> s;

        vector<string> t(s.size());
        for (int i = 0; i < s.size(); i++) {
            t[i] = string(1, s[i]);
        }

        int count = 1;
        for (int i = 0; i + 1 < t.size(); i++) {
            if (t[i] != t[i+1]) {
                count++;
            }
        }

        if (t.size() == 1) {
            cout << 0 << endl;
        } else {
            cout << count << endl;
        }
    }
    return 0;
}
