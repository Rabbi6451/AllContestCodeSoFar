#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        vector<int> odds;
        long long mihai = 0;       
        for(int x : a){
            if(x % 2 == 0) mihai += x;  
            else odds.push_back(x);
        }
        sort(odds.begin(), odds.end()); 
        
        long long bianca = 0;
        bool ok = true;
        for(int x : odds){
            bianca += x;
            if(mihai <= bianca){
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    
}