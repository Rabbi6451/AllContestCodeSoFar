#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

const long long MOD = 676767677;

int main(){

    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];

        vector<long long> dp(n+1, LLONG_MAX);
        dp[0] = 0;

        for(int i=1;i<=n;i++){
            long long product = 1;
            for(int j=i;j>=1;j--){
                if(j<i && a[j] > a[j+1]) break; 
                product = (product * a[j]) % MOD;
                dp[i] = min(dp[i], (dp[j-1] + product) % MOD);
            }
        }
        cout << dp[n] % MOD << "\n";
    }
}
