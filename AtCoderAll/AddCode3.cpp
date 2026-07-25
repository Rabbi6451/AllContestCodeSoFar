#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int count =0;
    for(char b : a){
        if(b=='1'){
            count++;
        }
    }
    cout<<count<<endl;
}
