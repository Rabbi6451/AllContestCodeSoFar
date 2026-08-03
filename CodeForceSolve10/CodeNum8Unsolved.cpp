#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> manager(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> manager[i];
    }

    int maxDepth = 0;

    for (int i = 1; i <= n; i++) {
        int depth = 1;
        int curr = manager[i];
        while (curr != -1) {
            depth++;
            curr = manager[curr];
        }
        maxDepth = max(maxDepth, depth);
    }

    cout << maxDepth << endl;
}
//Dps version.
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> manager;
// vector<int> memo; // memoization to avoid recomputation

// int depth(int i) {
//     if (manager[i] == -1) return 1; // no manager → depth 1
//     if (memo[i] != -1) return memo[i]; // already computed
//     return memo[i] = 1 + depth(manager[i]); // recursive depth
// }

// int main() {
//     int n;
//     cin >> n;
//     manager.resize(n+1);
//     memo.assign(n+1, -1);

//     for (int i = 1; i <= n; i++) {
//         cin >> manager[i];
//     }

//     int maxDepth = 0;
//     for (int i = 1; i <= n; i++) {
//         maxDepth = max(maxDepth, depth(i));
//     }

//     cout << maxDepth << endl;
//     return 0;
// }

