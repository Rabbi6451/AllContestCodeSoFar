#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    vector<vector<int>> vec(a, vector<int>(a));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> vec[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;i++){
            cout<<vec[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
