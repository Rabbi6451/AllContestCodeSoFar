#include <iostream>
using namespace std;

int main() {

    int n, k, n1;
    cin >> n >> k >> n1;

    long long roomArea = 1LL * n * n;
    long long carpetArea = 1LL * k * n1 * n1;

    if (carpetArea < roomArea) {
        cout << "NO\n";
        return 0;
    }

    if (n % n1 == 0) cout << "YES\n";
    else cout << "NO\n";

}
