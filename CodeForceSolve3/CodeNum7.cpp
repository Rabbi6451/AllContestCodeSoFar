#include<iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

        int maxHeight;
        if (m > d) {
            maxHeight = 1;
        } else {
            maxHeight = d / m + 1;
        }

        int towers = (n + maxHeight - 1) / maxHeight;
        cout << towers << "\n";
    }
}