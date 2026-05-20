#include<iostream>
using namespace std;

int main(){
    int num,digit,lastdigit=0;
    cin>>num;
    while(num>0){
        digit=num%10;
        lastdigit=lastdigit+digit;
        num=num/10;
    }
    cout<<lastdigit;
}