#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) cin >> w[i];

    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }

    int maxEven = INT_MIN; 
    int minOdd  = INT_MAX; 

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) minOdd  = min(minOdd, w[i]);  
        else            maxEven = max(maxEven, w[i]); 
    }

    if (minOdd - maxEven >= 2) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
}