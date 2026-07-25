#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int count = 0;

    while(b--){
        int c,d;
        cin>>c>>d;
        if(c==d){
            count++;
        }
    }
    cout<<count<<endl;
}