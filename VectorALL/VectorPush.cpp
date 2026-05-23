#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a;
        for(int i=1;i<=n;i++){
            if(i%2==1)a.push_back(n+i);
            else a.push_back(i);
        }
        for(int x:a){
            cout<<x<<" ";
            
        }
        cout<<"\n";
    }
}