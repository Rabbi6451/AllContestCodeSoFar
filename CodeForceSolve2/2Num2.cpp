#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        for(int i=0;i<b;i++){
            if(t.size()==1){
                cout<<t[i]<<(i+1==b?"\n":" ");
            }else if(t.size()!=1){
                t[i]=2;
                cout<<t[i]<<(i+1==b?"\n":" ");
            }
        }

    }
}