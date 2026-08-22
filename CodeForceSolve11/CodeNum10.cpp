#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        string c;
        cin>>c;
        int k = c.size();
        cout<<c[k-1]<<endl;
    }
}