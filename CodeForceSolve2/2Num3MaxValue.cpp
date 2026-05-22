#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
            auto max_it = max_element(t.begin(), t.end());
             int max_val = *max_it;
            cout<<max_val*b<<endl;
    }
}