#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Count how many doors are closed (1)
        int closedCount = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) closedCount++;
        }

        // If closed doors <= x, Yousef can open them all with the button
        if(closedCount <= x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}