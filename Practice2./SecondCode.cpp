#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        string b;
        cin>>b;
        if(b[0]+b[1]+b[2]==b[3]+b[4]+b[5]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

}