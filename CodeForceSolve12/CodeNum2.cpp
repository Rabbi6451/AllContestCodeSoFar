#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        
        cout << s[i] << (count - 1);
    }
    cout << endl;

    return 0;
}
