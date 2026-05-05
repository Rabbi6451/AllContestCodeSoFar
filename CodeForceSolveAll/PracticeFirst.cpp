#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++) cin>>t[i];

        vector<int> div6, div3,div2,others;
        for(int x : t){
            if(x%6==0) div6.push_back(x);
            else if(x%2==0) div2.push_back(x);
            else if(x%3==0) div3.push_back(x);
            else others.push_back(x);
        }
        vector<int> result;
        result.insert(result.end(), div6.begin(), div6.end());
        result.insert(result.end(), div2.begin(), div2.end());
        result.insert(result.end(), others.begin(), others.end());
        result.insert(result.end(), div3.begin(), div3.end());
        for(int i=0;i<b;i++){
            cout<<result[i]<<(i+1==b ? '\n' : ' ');
        }
    }
}