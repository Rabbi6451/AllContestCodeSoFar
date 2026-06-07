#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isPalin(long long x) {
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;

        string s = to_string(n);
        int d = s.size();
        
        int half = (d + 1) / 2;
        
        // prefix = first `half` digits as number
        long long prefix = stoll(s.substr(0, half));
        
        bool found = false;
        
        // Try prefix-1, prefix, prefix+1
        for (long long delta = -1; delta <= 1; delta++) {
            long long p = prefix + delta;
            if (p < 0) continue;
            
            string ps = to_string(p);
            
            string palin_s = ps;
            string rev_ps = ps;
            reverse(rev_ps.begin(), rev_ps.end());
            
            if (d % 2 == 0) {
                palin_s += rev_ps;
            } else {
                palin_s += rev_ps.substr(1);
            }
            
            if ((int)palin_s.size() != d) continue;
            
            long long a = stoll(palin_s);
            
            if (a < 0 || a > n) continue;
            
            long long b = n - a;
            
            if (b >= 0 && b % 12 == 0 && isPalin(a)) {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            if (n % 12 == 0) {
                cout << 0 << " " << n << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}