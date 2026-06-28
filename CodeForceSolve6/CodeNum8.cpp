#include<iostream>
#include<vector> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        
        int turn = 0;
        long long prev = 0;
        bool decided = false;
        
        for(int i = 0; i < n; i++){
            long long d = a[i] - prev;
            if(d == 0){ prev = a[i]; continue; }
            
            int active = n - i;
            if(active % 2 == 1){
                cout << (turn == 0 ? "Alice" : "Bob") << "\n";
                decided = true;
                break;
            } else {
                if(d % 2 == 1) turn ^= 1;
            }
            prev = a[i];
        }
        if(!decided){
            cout << (turn == 0 ? "Bob" : "Alice") << "\n";
        }
    }
}