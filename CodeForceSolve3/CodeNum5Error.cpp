#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int small = i + 1;
        int median = n + 1 + 2 * i;
        int large = n + 2 + 2 * i;
        
        std::cout << small << " " << median << " " << large << (i == n - 1 ? "" : " ");
    }
    std::cout << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    if (std::cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}   