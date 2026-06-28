#include<iostream>
using namespace std;

bool valid(int x, int y) {
    return max(x, y) <= 2 * min(x, y) + 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (valid(a, b) && valid(c - a, d - b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}