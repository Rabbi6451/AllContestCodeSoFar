#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b,c;
        cin>>b>>c;
        int first = (24-b);
        int second = (60-c);
        if(second==0){
            first=first+1;
        }
        int third = first*60*60;
        int fourth = second*60;
        cout<<((third/60)/60)+(fourth/60)+fourth%10<<endl;
    }
}