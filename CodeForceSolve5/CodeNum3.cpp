#include<iostream>
using namespace std;

int main(){
    long long a;
    cin>>a;
    while(a--){
        long long b;
        cin>>b;
        vector<long long> t(b);
        for(int i=0;i<b;i++) cin>>t[i];
        sort(t.begin(), t.end());
        auto last = unique(t.begin(), t.end());
        t.erase(last, t.end());
        for(int i=0;i<t.size();i++){
            cout<<t[i]<<" ";
        }
        cout << endl;
    }
}