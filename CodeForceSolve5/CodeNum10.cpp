#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b%2!=0){
            cout<<b+1<<endl;
        }else{
            cout<<b<<endl;
        }
    }
}