#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> t(a);

    for (int i = 0; i < a; i++) {
        cin >> t[i];
    }

    int mn = t[0];
    int mx = t[0];

    for (int i = 1; i < a; i++) {
        if (t[i] < mn) mn = t[i];
        if (t[i] > mx) mx = t[i];
    }

    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;

    return 0;
}
