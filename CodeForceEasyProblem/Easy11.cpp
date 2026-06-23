#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b%4==0){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
    }
}