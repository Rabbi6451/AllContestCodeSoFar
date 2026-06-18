#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        int count1 = 0;
        int count2 = 0;
        cin>>b;
        vector<int> t(b+b);
       
        for(int i=0;i<b+b;i++){
            cin>>t[i];
        }
        for(int i=0;i<b+b;i++){
            if(t[i]%2==0){
                count1++;
            }else if(t[i]%2 != 0){
                count2++;
            }
        }
        if(count1==count2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}