#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        string b;
        cin>>b;
        if(b.size()>10){
            cout<<b.front()<<b.size()-2<<b.back()<<endl;
        }else{
            cout<<b<<endl;
        }

    }
}