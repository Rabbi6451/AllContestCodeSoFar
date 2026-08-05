#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    vector<long long> t(a),k(b);
    for(auto& it: t){
        cin>>it;
    }
    for(auto& it:k){
        cin>>it;
    }
    sort(t.begin(),t.end());sort(k.begin(),k.end());
    if(t.size()<2*k.size()){
        cout<<"No"<<endl;
        return;
    }
    for(int i=k.size()-1;i>=0;i--){
        if(!(t[i]<=k[i]&&t[i]<=t[t.size()-k.size()+i])){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
    }
    

}
int main(){
        int z;
        cin>>z;
        for(int i=0;i<z;i++){
            solve();
        }
        
    }