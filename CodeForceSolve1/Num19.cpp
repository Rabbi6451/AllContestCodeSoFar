#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b,c;
        int count = 0;
        cin>>b>>c;
        vector<long long> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        for(int i=0;i<b;i++){
            count = t[i] + count;
        }
        if(count % 2 != 0){
            cout<<"YES"<<endl;
        }else if(count % 2 == 0 && b * c % 2==0){
            cout<<"YES"<<endl;
        }else if(count % 2 != 0 && b*c % 2 == 0){
            cout<<"YES"<<endl;
        }else if(count % 2 == 0 && b*c % 2 != 0){
            cout<<"NO"<<endl;
        }
        
        
    }
}