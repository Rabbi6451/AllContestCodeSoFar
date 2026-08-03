#include <iostream>
#include <string>
using namespace std;

void solve(){
    string a;
    cin>>a;
    a.erase(find(a.begin(),a.end(), '0'));
    a.erase(find(a.begin(),a.end(), '1'));
    cout<<a<<endl;
}
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int b;
    cin>>b;
    for(int i=1;i<=b;i++){
        solve();
    }

}