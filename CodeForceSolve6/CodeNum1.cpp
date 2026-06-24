#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int count = 1;
        vector<int> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        sort(t.begin(),t.end());
        for(int i=0;i<b-1;i++){
            if(t[i]==t[i+1]){
                count++;
            }
        }
        if(count>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}