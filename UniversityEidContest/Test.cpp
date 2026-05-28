#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int roomArea = a*a;
    int carpetArea = b*(c*c);
    if(roomArea<=carpetArea){
        cout<<"YES"<<endl;
    }else if(carpetArea<roomArea){
        cout<<"NO"<<endl;

    }
}