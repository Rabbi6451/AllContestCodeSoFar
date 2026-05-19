#include <iostream>
using namespace std;

int main() {

    int x;
    cin >> x;

    while (x--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long type2 = n / 3;
        long long val = n % 3;

        long long cost = 0;

        cost += type2 * min(b, 3 * a);

        cost += min(b, val * a);

        cout << cost << '\n';
    }
}