#include <iostream>
using namespace std;
using int64 = long long;

int main() {
   
    int64 n, k;
    cin >> n >> k;
    int64 oddCount = (n + 1) / 2;
    if (k <= oddCount) cout << 2 * k - 1 << "\n";
    else cout << 2 * (k - oddCount) << "\n";
    return 0;
}
