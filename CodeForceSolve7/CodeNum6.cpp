#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        int score = 0;
        for (int i = 1; i <= n; i++) {
            score += cnt[i] / 2;
        }
        cout << score << "\n";
    }

    return 0;
}