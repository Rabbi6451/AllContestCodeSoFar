#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int lastdigit=a[a.length()-1]-'0';
    if(lastdigit%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}