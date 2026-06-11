#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) a[i] = 2 * (i + 1);     
            else a[i] = 2 * (i + 1) - 1;            
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i+1 == n ? '\n' : ' ');
        }
    }
}