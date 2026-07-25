#include<iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int ans = INT_MAX;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum += x;
        ans = min<int>(ans, sum / (i + 1));
        cout << ans <<(i+1==n?"\n":" ");
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
}