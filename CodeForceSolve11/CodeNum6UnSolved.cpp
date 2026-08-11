#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> freq;
        long long total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            total += a[i];
        }

        int maxFreq = 0, val = 0;
        for (auto &p : freq) {
            if (p.second > maxFreq) {
                maxFreq = p.second;
                val = p.first;
            }
        }

        long long wastedCount = max(0LL, 2LL * maxFreq - n - 2);
        long long answer = total - wastedCount * (long long)val;

        cout << answer << "\n";
    }
    return 0;
}