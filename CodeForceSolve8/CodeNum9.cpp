#define ll long long
#include <iostream>
#include <vector>
using namespace std;

bool checkPrefix(const vector<ll>& a, int i, ll sum, ll need) {
    if (i == a.size()) return true; 
    sum += a[i];       
    need += i + 1;     
    if (sum < need) return false;
    return checkPrefix(a, i + 1, sum, need);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (checkPrefix(a, 0, 0, 0)) cout << "YES\n";
        else cout << "NO\n";
    }
}
