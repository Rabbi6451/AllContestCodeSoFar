#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int>t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        sort(t.begin(),t.end());

        int mid = t[b/2];
        int c=0,d=0;
        for(int i=0;i<b;i++){
            if(mid>t[i]) c++;
            if(mid<t[i]) d++;
        }
        cout<<max(c,d)<<endl;
        
    }
}