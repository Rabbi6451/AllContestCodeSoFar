#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        bool hasDuplicate = false;
        for (int i = 0; i < n-1; i++) {  
            if (a[i] == a[i+1]) {
                hasDuplicate = true;
                break;
            }
        }

        if (hasDuplicate) {
            cout << -1 << "\n";
        } else {
            sort(a.rbegin(), a.rend());
            for (int i = 0; i < n; i++) {
                cout << a[i] << (i + 1 == n ? '\n' : ' ');
            }
        }
    }
}