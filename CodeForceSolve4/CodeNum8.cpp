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
        int maximum = *max_element(t.begin(),t.end());
        int minimum = *min_element(t.begin(),t.end());
        if((maximum-minimum) % 2 == 0){
            cout<<0<<endl;
        }else if(maximum-minimum%2 != 0){
            cout<<maximum-minimum<<endl;
        }
    }
}