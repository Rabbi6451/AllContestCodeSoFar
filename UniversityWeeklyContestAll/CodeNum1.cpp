#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int count1=0,count2=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1'){
            count1++;
        }else if(a[i]=='0'){
            count2++;
        }
    }
    if(count1==count2){
        cout<<"1";
    }else{
        cout<<"0";
    }

}