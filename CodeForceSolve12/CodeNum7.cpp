#include<iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0;i<n;i=i+k){
        bool f=1;
        for(int j=0;j<k;j++){
            if(s[i+j]=='0'){
                f=0;
                break;
            }
        }
        if(f) cnt++; 
    }
    cout<<cnt<<endl;
}

int main(){
    int a;
    cin>>a;
    while(a--){
        solve();
    }
}