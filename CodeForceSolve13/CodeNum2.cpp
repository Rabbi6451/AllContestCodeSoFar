#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    cout << max(a + c - b, b - a)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

