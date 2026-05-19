#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        string b;
        string c="Yes";
        string d="yEs";
        string e="yeS";
        string f="YES";
        string g="yes";
        string h="YEs";
        string i="yES";
        string j="YeS";
        cin>>b;
        if(b==c || b==d || b==e || b==f || b==g || b==h || b==i || b==j){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}