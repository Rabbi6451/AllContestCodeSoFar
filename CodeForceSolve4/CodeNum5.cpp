#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(long long x) {
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        bool found = false;

        for(long long a = 0; a <= n; a++) {
            if(isPalindrome(a)) {
                long long b = n - a;
                if(b % 12 == 0) {
                    cout << a << " " << b << "\n";
                    found = true;
                    break;
                }
            }
        }

        if(!found) cout << -1 << "\n";
    }
}
