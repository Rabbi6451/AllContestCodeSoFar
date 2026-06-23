#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int count = 1;
        int b;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++) cin>>t[i];

        sort(t.begin(), t.end());

        for(int i=0;i<b-1;i++){
            if(t[i]!=t[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}