#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; 

    while (l <= r) {
        int pick;
        if (t[l] > t[r]) {
            pick = t[l];
            l++;
        } else {
            pick = t[r];
            r--;
        }

        if (turn) {
            sereja += pick;
        } else { 
            dima += pick;
        }
        turn = !turn; 
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
