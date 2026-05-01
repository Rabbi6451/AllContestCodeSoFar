#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n < 4 || n % 2) { cout << -1 << "\n"; continue; }
        cout << (n + 5) / 6 << " " << n / 4 << "\n";
    }
}
