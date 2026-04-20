#include<iostream>
using namespace std;

int main(){
    int a,b;
    int i;
    cin>>a>>b;
    int count =0;
    vector<int> t(a,b);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }

    for(int i=0;i<a;i++){
        count=i+count;
    }
    cout<<count+b;
}