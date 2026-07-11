#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> rev;
        int lo = 1, hi = n;
        bool useHigh = true;
        for (int k = 0; k < n; k++) {
            if (useHigh) rev.push_back(hi--);
            else rev.push_back(lo++);
            useHigh = !useHigh;
        }
        
        for (int i = n - 1; i >= 0; i--) {
            cout << rev[i] << " \n"[i == 0];
        }
    }
    return 0;
}