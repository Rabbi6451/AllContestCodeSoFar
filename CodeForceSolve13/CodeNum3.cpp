#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int a;
    cin>>a;
    while(a--){
        int b;
        char c;
        int cnt = 0;
        string d;
        string k = d;
        cin>>b>>c;
        cin>>d;
        for(int i=0;i<b/2;i++){
            char right = d[b-i-1];
            char left = d[i];
            if(right == left){
                continue;
            }else if(left==c || right==c){
                cnt++;
            }else{
                cnt=cnt+2;
            }
        }
        cout<<cnt<<endl;
    }
    }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
