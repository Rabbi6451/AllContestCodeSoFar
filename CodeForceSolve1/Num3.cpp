#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while (a--){
        int b,c,d;
        cin>>b>>c>>d;
        if(b!=c && b!=d){
            cout<<b<<endl;
        }else if(c!=b && c!=d){
            cout<<c<<endl;
        }else if(d!=b && d!=c){
            cout<<d<<endl;
        }
    }
}

