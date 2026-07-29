#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k, m;
        cin >> n >> k >> m;

        if(k > n) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<long long> a(n, 1);

        long long sum = k - 1;
        long long need = ( ( (sum % m) == 0 ) ? m : (m - sum % m) );
        a[k-1] = need;

        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}