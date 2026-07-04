#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b,c;
        cin>>b>>c;
        if(c<-1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}