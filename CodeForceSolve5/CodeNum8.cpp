#include <iostream>
#include <numeric>
using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;
        int g = gcd(l, b);
        int ans = l - g + (a % g);
        cout << ans << "\n";
    }
}