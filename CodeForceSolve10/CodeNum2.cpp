#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        string b;
        cin>>b;
        int count=0,count1=0;
        for(auto &k : b){
            if(k=='A'){
                count++;
            }else if(k=='B'){
                count1++;
            }
        }
        if(count>count1){
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
}