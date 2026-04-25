#include<iostream>
using namespace std;

int main(){
    int a,i;
    cin>>a;
    vector<int>t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    for(int i=0;i<a;i++){
        if(t[i]%2==0){
            t[i]=2;
        }
        cout<<t[i]<<" ";
    }
}