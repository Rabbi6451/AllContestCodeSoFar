#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int open = 0; 
        for (char x : s) {
            if (x == 'Q') {
                open++;
            } else {
                if (open > 0) open--; 
    
            }
        }
        cout << (open == 0 ? "Yes" : "No") << "\n";
    }
}