#include<iostream>
#include<set>
using namespace std;

int main(){
    int a,i;
    cin>>a;
    vector<int> t(a);
    for(int i=0;i<a;i++) cin>>t[i];
    set<int> s(t.begin(),t.end());
    cout << (s.size() == a ? "YES" : "NO");
}
