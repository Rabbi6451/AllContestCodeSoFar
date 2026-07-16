#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        
        long long diff = x - 2*y;
        
        long long mod = ((diff % 3) + 3) % 3;
        
        long long c0 = max(0LL, -y);
        
        if (mod == 0 && diff - 6*c0 >= 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
}