#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int> t(a);
    for(int i=0;i<a;i++) cin>>t[i];
    int maximum = max_element(t.begin(),t.end()) - t.begin();
    cout<<"Maximum element : "<<t[maximum]<<endl;
    cout<<"Maximum element Location : "<<maximum<<endl;
}