#include <iostream>
using namespace std;

void solve()
{
    int a;
    cin>>a;
    while(a--){
        int b,c;
        cin>>b>>c;
        long long result = 2LL*(c-1)+(1LL<<(b-c+1));
        cout<<result<<endl;
    }
    }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
