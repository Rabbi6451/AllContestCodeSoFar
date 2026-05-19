#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int k=5;
    int count=0;
    int c=1200;
    int z=1440;
    int sum = c+b;
    for(int i=1;i<=a;i++){
        count = count + (k*i);
    }
    int total = sum+count;
    if(total<=z){
        cout<<a;
    }else if(total>z){
        cout<<a-1;
    }
}