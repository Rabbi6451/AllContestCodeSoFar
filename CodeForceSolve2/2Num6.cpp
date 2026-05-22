#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = abs(a - b);
        long long moves = (diff + 9) / 10; 
        cout << moves << "\n";
    }
}
