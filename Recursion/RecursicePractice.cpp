#include<iostream>
using namespace std;

void hello(int k){
    if(k==0) return;
    cout<<"Hello world"<<endl;
    hello(k-1);

}
int main(){
    hello(5);
    return 0;
}