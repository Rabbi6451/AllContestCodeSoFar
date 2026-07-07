#include<iostream>
using namespace std;

int main(){
    int a;cin>>a;
    while(a--){
        int b;
        cin>>b;
        int even = 0;
        int odd = 0;
        vector<int> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        for(int i=0;i<b;i++){
            if(t[i]%2==0){
                even = t[i] + even;
            }else{
                odd = odd + t[i];
            }
        }
        if(even>odd){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}