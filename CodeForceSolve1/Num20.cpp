#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];
        
        int l = -1;
        for(int i = 0; i < n; i++){
            if(p[i] != n - i){
                l = i;
                break;
            }
        }
        
        if(l == -1){
            for(int i = 0; i < n; i++) cout << p[i] << " \n"[i==n-1];
            continue;
        }
        
        int max_val = *max_element(p.begin() + l, p.end());
        int r = find(p.begin() + l, p.end(), max_val) - p.begin();
        
        reverse(p.begin() + l, p.begin() + r + 1);
        
        for(int i = 0; i < n; i++) cout << p[i] << " \n"[i==n-1];
    }
}