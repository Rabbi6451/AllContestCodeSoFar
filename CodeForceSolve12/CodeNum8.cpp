#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int cnt = 0;
    int max = 0;
    for (int i = 0; i <n; i++)
    {
        if(t[i]>max || t[i]==max){
            max = t[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        solve();
    }
}