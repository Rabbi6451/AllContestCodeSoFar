#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(){
    int b;
    cin >> b;
    vector<int> t(b);
    for(int i = 0; i < b; i++){
        cin >> t[i];
    }
    int mx = 0;
    for(int i = 0; i < b - 1; i++){
        int result = abs(t[i] - t[i+1]);
        mx = max(mx, result);
    }
    if(mx > 1){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int a;
    cin >> a;
    while(a--){
        solve();
    }
}
