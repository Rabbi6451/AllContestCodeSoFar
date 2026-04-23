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

    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += t[i];
    }

    cout << sum;
    return 0;
}
