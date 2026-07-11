#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        bool result = true;
        vector<long long> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        if(b==1){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<b;i++){
            if(t[i]<t[i+1]){
                result = false;
            }
        }
    }
}