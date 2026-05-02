#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b,c;
        cin>>b>>c;
        if(b%2==0 || c%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}