#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string e;
    cin >> e;

    long long value = 0;
    for (char ch : e) {
        int strip = ch - '0';
        if (strip == 1) value += a;
        else if (strip == 2) value += b;
        else if (strip == 3) value += c;
        else if (strip == 4) value += d;
    }

    cout << value << endl;
    return 0;
}
