#include<iostream>
#include<set>
#include<vector>
#include<unordered_map>
#include<functional>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        unordered_map<long long,int> mp;
        for (int i = 0; i < n; i++) mp[b[i]] = i+1;

        multiset<long long> B(b.begin(), b.end());
        vector<int> mapped;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            auto it = B.lower_bound(a[i]);
            if (it == B.end()) { ok = false; break; }
            mapped.push_back(mp[*it]);
            B.erase(it);
        }

        if (!ok) {
            cout << -1 << "\n";
            continue;
        }

        // count inversions in O(n^2)
        long long inv = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (mapped[i] > mapped[j]) inv++;
            }
        }
        cout << inv << "\n";
    }
}
