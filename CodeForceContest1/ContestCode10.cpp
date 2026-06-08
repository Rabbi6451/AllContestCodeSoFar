#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<long long> b(n);
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(b.begin(), b.end(), greater<long long>());
        bool valid = true;
        for(int i = 0; i < n-2; i++){
            if(b[i] % b[i+1] != b[i+2]){
                valid = false;
                break;
            }
        }
        if(b[0] < b[1]) valid = false;
        
        if(valid){
            cout << b[0] << " " << b[1] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}