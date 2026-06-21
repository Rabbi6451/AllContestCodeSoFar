#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long result = 0;
        while (n > 0) {
            result += n;
            n /= 2;
        }
        cout << result << "\n";
    }
    return 0;
}
