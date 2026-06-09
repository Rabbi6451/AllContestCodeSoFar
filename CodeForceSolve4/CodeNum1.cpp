#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b==2){
            cout<<b<<endl;
        }else if(b==3){
            cout<<b<<endl;
        }
        else if(b%2==0){
            cout<<0<<endl;
        }else if(b%2!=0){
            cout<<1<<endl;
        }
    }
}