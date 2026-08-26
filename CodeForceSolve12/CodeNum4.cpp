#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int sum = b;
        if(b%2!=0){
            cout<<0<<endl;
            continue;
        }
        if(b<=4){
            cout<<b/2<<endl;
            continue;
        }
        cout<<(b/4)+1<<endl;
    }
}