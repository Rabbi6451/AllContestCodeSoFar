#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; i++) cin >> doors[i];

        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (doors[i] == 1) {
                if (first == -1) first = i;
                last = i;
            }
        }

        int span = last - first + 1;
        cout << (x >= span ? "YES" : "NO") << "\n";
    }
    return 0;
}