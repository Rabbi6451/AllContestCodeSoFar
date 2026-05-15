#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    sort(t.begin(), t.end(), greater<int>());

    int sereja = 0, dima = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sereja += t[i];
        } else {
            dima += t[i];
        }
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
//input : 4
//1 2 3 4 
//output : sereja = 6 , dima 4
