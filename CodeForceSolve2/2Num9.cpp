#include<iostream>
#include<vector> 
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        int count = 0;
        cin>>b;

        vector<char> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        for(int i=0;i<b;i++){
            if(t[i]=='R'){
                count++;
            }else if(t[i]=='L'){
                break;
            }
        }
        cout<<count+1<<endl;
    }
}   