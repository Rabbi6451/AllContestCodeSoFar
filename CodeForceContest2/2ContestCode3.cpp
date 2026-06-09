#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans(4*n);

        for(int i = 0; i < n; i++){
            ans[i]       = i + 1;            // seg1: 1,2,...,n
            ans[n + i]   = i + 1;            // seg2: 1,2,...,n
            ans[2*n + i] = (i + 1) % n + 1;  // seg3: 2,3,...,n,1
            ans[3*n + i] = i + 1;            // seg4: 1,2,...,n
        }

        for(int i = 0; i < 4*n; i++){
            cout << ans[i] << (i+1 == 4*n ? '\n' : ' ');
        }
    }
}