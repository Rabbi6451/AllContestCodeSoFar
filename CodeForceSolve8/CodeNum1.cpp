#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
         int b;
         cin>>b;
         if(b<3){
            cout<<b/2<<endl;
         }else{
            int k=b/4;
            int z=b-(k*4);
            cout<<k+z/2<<endl;
         }

    }
}