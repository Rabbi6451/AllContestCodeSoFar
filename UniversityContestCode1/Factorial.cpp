#include<iostream>
using namespace std;

int main(){
    long long a;
    long long count =1;
    cin>>a;

    for(int i=1;i<=a;i++){
        count = count *i;
        
    }
    cout<<count;
}