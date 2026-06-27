#include<iostream>
#include<vector> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        sort(a.begin(), a.end());
        
        int maxFreq = 1, curFreq = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]) curFreq++;
            else curFreq = 1;
            maxFreq = max(maxFreq, curFreq);
        }
        
        int need = (n + 1) / 2;
        cout << (maxFreq >= need ? "YES" : "NO") << "\n";
    }
    return 0;
}