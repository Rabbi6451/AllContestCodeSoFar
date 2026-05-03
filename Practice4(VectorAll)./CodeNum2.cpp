#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    vector<int> vec(a, b);
    for(int k : vec){
        cout<<k<<endl;
    }
}