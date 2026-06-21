#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> freq(101, 0);
        for (int x : a) freq[x]++;

        int ans = 0;
        while (freq[ans] > 0) ans++;
        cout << ans << "\n";
    }
    return 0;
}