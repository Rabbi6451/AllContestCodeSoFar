#include<iostream>
#include<vector>

using namespace std;

int main(){
    int a;
    int count = 0;
    cin>>a;
    vector<int> t(a);
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    for(int i=0;i<a;i++){
        if(t[i]>=0){
            count++;
        }
    }
    if(count>0){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
}