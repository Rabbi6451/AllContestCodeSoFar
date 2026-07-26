#include<iostream>
using namespace std;

int main(){
    int b;
    cin>>b;
    while(b--){
        int a;
        cin>>a;
        if(a==1){
        cout<<"2 3 6"<<endl;
    }else if(a==2){
        cout<<"1 2 2 "<<endl;
    }else if(a==3){
        cout<<"1 1 1"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    }
    
}