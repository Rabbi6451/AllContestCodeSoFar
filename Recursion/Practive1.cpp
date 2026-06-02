#include<iostream>
using namespace std;

bool isEven(int n);
bool isOdd(int n);

bool isEven(int n) {
    if (n == 0) return true;
    return isOdd(n - 1);
}

bool isOdd(int n) {
    if (n == 0) return false;
    return isEven(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << (isEven(n) ? "Even" : "Odd") << endl;
    return 0;
}
