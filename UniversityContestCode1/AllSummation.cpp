#include<iostream>
using namespace std;

int main(){
    int a;
    long long count = 0;
    cin>>a;
    
    vector<long long> t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    for(int i=0;i<a;i++){
        count = count + t[i];
    }
    cout<<count;
    
}