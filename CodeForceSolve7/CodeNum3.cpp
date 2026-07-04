#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string out;
    out.reserve(1 << 22);
    char buf[16];

    auto appendInt = [&](int x){
        int len = 0;
        if (x == 0) { out.push_back('0'); return; }
        while (x > 0) { buf[len++] = char('0' + x % 10); x /= 10; }
        while (len > 0) out.push_back(buf[--len]);
    };

    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int small = i + 1;
            int median = n + 1 + 2 * i;
            int mx = n + 2 + 2 * i;
            appendInt(small);
            out.push_back(' ');
            appendInt(median);
            out.push_back(' ');
            appendInt(mx);
            out.push_back(i == n - 1 ? '\n' : ' ');
        }
    }

    cout << out;
    return 0;
}