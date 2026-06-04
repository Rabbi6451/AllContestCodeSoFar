#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b<=-67 && b<=67){
            cout<<b+1<<endl;
        }else{
            cout<<b<<endl;
        }
    }
}