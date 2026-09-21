#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int a;
    int b,c,d;
    cin>>a;
    cin>>b>>c>>d;
    int firstmin = min(b,c);
    int minum = min(d,firstmin);
    int result = a - minum;
    cout<<result<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
