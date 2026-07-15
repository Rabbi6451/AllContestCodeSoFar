#define ll long long
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool ok = true;
        ll need = 0;
        for(int i = 0; i < n; i++){
            need += i+1; // prefix sum of 1..i+1
            ll sum = 0;
            for(int j = 0; j <= i; j++) sum += a[j];
            if(sum < need){
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}
