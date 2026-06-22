#include <iostream>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a = 12, b = 18;
    cout << "GCD: " << gcd(a,b) << "\n";   // 6
    cout << "LCM: " << lcm(a,b) << "\n";   // 36
}
