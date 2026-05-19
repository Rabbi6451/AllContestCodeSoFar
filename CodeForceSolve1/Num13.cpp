#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b,c,d;
        cin>>b>>c>>d;
        if(b+c==d){
            cout<<"+"<<endl;
        }else{
            cout<<"-"<<endl;
        }

    }
}