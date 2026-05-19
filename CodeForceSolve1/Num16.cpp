#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(5, 0);
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        cnt[s]++;
    }

    int taxis = cnt[4];
    int pair31 = min(cnt[3], cnt[1]);
    taxis += cnt[3];
    cnt[1] -= pair31;

    taxis += cnt[2] / 2;
    if (cnt[2] % 2) {
        taxis++;
        cnt[1] -= min(2, cnt[1]);
    }

    if (cnt[1] > 0) {
        taxis += (cnt[1] + 3) / 4;
    }

    cout << taxis << "\n";
}
