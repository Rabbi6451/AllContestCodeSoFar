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
        
        int unanswered = 0;
        bool ok = true;
        
        for (char ch : s) {
            if (ch == 'Q') {
                unanswered++;
            } else {
                if (unanswered > 0) {
                    unanswered--;
                } else {
                    ok = false;
                    break;
                }
            }
        }
        
        if (ok && unanswered == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
