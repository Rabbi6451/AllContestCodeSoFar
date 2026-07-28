#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    string k = a;
    reverse(a.begin(),a.end());
    if(k==a){
        cout<<"YES"<<endl;
    }else{
        cout<<0<<endl;
    }
}