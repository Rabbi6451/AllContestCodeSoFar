#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0 ;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'Y') {
               count++;
            }
        }
        if (count>=2) cout << "no\n";
        else if(count<=1) cout << "yes\n";
    }
    return 0;
}
