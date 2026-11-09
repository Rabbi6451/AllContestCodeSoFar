#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<bool> printed(n + 1, false);
        vector<int> st;

        for (int i = 1; i <= n; i++) {
            char c = s[i - 1];
            if (c == '1') {
                st.push_back(i);
            } else if (c == '2') {
                if (!st.empty()) {
                    printed[st.back()] = true;
                    st.pop_back();
                } else {
                    printed[i] = true;
                }
            } else {
                printed[i] = true;
            }
        }

        vector<int> res;
        for (int i = 1; i <= n; i++)
            if (!printed[i]) res.push_back(i);

        cout << res.size() << "\n";
        for (size_t j = 0; j < res.size(); j++) {
            if (j) cout << ' ';
            cout << res[j];
        }
        cout << "\n";
    }
    return 0;
}