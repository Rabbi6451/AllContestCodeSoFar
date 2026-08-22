#include<iostream>
#include<map>
#include<numeric>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i =0 ;i<n;i++){
            cin>>v[i];
        }
        map<int,int> mp; for(int i : v)mp[i]++;
        int mx = 0,ij =0 ;
        for(auto it : mp){
            if(it.second > ij){
                ij = it.second; mx = it.first;
            }
        }
           long long ans = accumulate(v.begin(), v.end(), 0LL);
        if(ij > (n - ij)){
            long long res = ij - (n - ij)-2;
            res = max(res,0LL);
            res *= mx;
            ans -= res;
        }
        cout << ans <<endl;
    }
}