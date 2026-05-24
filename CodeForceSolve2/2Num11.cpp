#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        vector<char> t(b);
        for(int i = 0; i < b; i++) cin >> t[i];

        bool found = false;
        for(int period = 1; period <= b/2; period++){
            if(b % period != 0) continue;
            
            bool valid = true;
            for(int i = period; i < b; i++){
                if(t[i] != t[i % period]){
                    valid = false;
                    break;
                }
            }
            if(valid){ found = true; break; }
        }

        cout << (found ? "YES" : "NO") << "\n";
    }
}