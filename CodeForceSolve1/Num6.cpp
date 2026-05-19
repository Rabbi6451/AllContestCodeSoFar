#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++) cin>>t[i];

        vector<int> div4,div2,div3,others;
        for(int x: t){
            if(x%4==0)div4.push_back(x);
            else if(x%2==0) div2.push_back(x);
            else if(x%3==0) div3.push_back(x);
            else others.push_back(x);
        }
        vector<int> result;
        result.insert(result.end(),div4.begin(),div4.end());
        result.insert(result.end(),div2.begin(),div2.end());
        result.insert(result.end(),div3.begin(),div3.end());
        result.insert(result.end(),others.begin(),others.end());
        for(int i=0;i<b;i++){
            cout<<result[i]<<(i+1==b?"\n":" ");
        }
    }
}