#include <iostream>
#include <vector>
#include <numeric> // for accumulate
#include <algorithm> // for sort

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    sort(a.rbegin(), a.rend());

    int my_sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        my_sum += a[i];
        count++;
        if (my_sum > total_sum - my_sum) {
            break;
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}   