#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int> t(a);
    for(int i=0;i<a;i++) cin>>t[i];
    cout<<(*min_element(t.begin(),t.end()))<<endl;
    cout<<(*max_element(t.begin(),t.end()))<<endl;
}
