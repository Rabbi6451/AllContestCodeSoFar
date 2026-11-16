#include <iostream>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b, c, d;
        cin>>b>>c>>d;
            if ((c-b)==1 && (d-c)==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
    }
}
    int main()
    {
        solve();
    }