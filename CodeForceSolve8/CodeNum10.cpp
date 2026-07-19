#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include<iostream>
using namespace std;

void solve() {
 
    ll x,y; cin>>x>>y;
 
    if(y < 0) x-= -4 * y;
    else if(y > 0) x-= 2 * y;
    
    if(x >= 0 && x % 3 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main() {
    fast;
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
}