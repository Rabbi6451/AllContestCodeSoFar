#include<iostream>
using namespace std;

void sum(int k){
    if(k==0)return;
    cout<<--k<<endl;
    sum(k--);
}
int main(){
    sum(10);
}