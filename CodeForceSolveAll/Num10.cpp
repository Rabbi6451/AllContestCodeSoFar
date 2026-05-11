#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;

        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++) cin>>t[i];
        unordered_map<int,int> freq;
        for(int x: t) freq[x]++;

        int targetValue = -1;
        for(auto &p : freq){
            if(p.second==1){
                targetValue = p.first;
                break;
            }
        }
        int pos = -1;
        for(int i=0;i<b;i++){
            if(t[i]==targetValue){
                pos = i+1;
                break;
            }
        }
            cout<<pos<<endl;

    }
}