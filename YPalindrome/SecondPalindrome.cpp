#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n = s.length();
        bool ok = true;
        for(int i = 0; i < n / 2; i++){
            if(s[i] != s[n - 1 - i]){
                ok = false;
                break;
            }
        }

        cout << (ok ? "yes" : "no") << "\n";
    }
    return 0;
}