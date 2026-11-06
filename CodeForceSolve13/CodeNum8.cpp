#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int a;
    cin>>a;
    while(a--){
        int n,m;  
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        vector<int> freq (26, 0);
        for(auto it : s) freq[it - 'a']++;
        for(auto it : t) freq[it - 'a']--;
        vector<int> tar (26, 0);
        tar['s' - 'a'] = 1;
        tar['i' - 'a'] = 1;
        tar['x' - 'a'] = 1;
        bool flag = true;
        for(int i=0;i<26;i++){
            if(freq[i] != tar[i]){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
       
    }
}
int main(){
    solve();
}