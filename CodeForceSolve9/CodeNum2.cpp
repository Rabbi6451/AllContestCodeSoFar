#include<vector>
#include<iostream>
using namespace std;

int main(){
    int a;cin>>a;
    while(a--){
        int b;
        int count = 0;
        int count1 =0;
        bool result = false;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        for(int i=0;i<b;i++){
            if(t[i]>2){
                count++;
            }else if(t[i]==2){
                count1++;
            }
        }
       
        if(count>0){
            cout<<"YES"<<endl;
        }else if(count1>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
