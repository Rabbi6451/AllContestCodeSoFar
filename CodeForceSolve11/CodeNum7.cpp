#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> t(n);
    int zeroCount = 0;
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] == 0) zeroCount++;
    }
    long long totalsum = accumulate(t.begin(), t.end(), 0LL);
    cout << (totalsum + zeroCount) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b;
    cin >> b;
    while(b--){
        solve();
    }
    return 0;
}