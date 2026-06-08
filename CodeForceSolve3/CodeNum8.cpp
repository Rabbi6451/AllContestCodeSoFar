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
        vector<int> t(b);
        for(int i=0;i<b;i++) cin>>t[i];
        for(int i=0;i<b;i++){
        if(t[i]==100){
            result = false;
        }
    }
    if(result){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    }
    
}