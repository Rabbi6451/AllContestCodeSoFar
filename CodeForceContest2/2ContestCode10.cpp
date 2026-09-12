#include<iostream>
#include<vector> 
using namespace std;

void solve(){
    int b;
    cin>>b;
    vector<int>t(b);
    int cnt1 = 0;
    int cnt0 = 0;
    for(int i=0;i<b;i++) cin>>t[i];
    for(int i=0;i<b;i++){
        if(t[i]==1){
            cnt1++;
        }else if(t[i]==0){
            cnt0++;
        }
    }
    if(cnt1<cnt0 && cnt1!=cnt0){
        cout<<"Elsie"<<endl;
    }else{
        cout<<"Bessie"<<endl;
    }

}
int main(){
    int a;
    cin>>a;
    while(a--){
        solve();
    }
}