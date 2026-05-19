#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        if(b%3==0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
}