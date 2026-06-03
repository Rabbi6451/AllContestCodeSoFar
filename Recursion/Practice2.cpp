#include<iostream>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    return n* fact (n-1);
}
int sum(int a){
    if(a==1){
        return 1;
    }
    return a + sum(a-1);
}

int main(){
    cout<<fact(4)<<endl;
    cout<<sum(7)<<endl;
}