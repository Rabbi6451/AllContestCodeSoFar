#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 10000000;

int spf[MAXN];        
long long pre[MAXN]; 

void sieve() {
    vector<int> primes;
    primes.reserve(700000);
    for (int i = 2; i < MAXN; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            primes.push_back(i);
        }
        for (int p : primes) {
            if (p > spf[i]) break;
            long long val = (long long)i * p;
            if (val >= MAXN) break;
            spf[(int)val] = p;
        }
    }

    pre[0] = 0;
    pre[1] = 0;
    for (int i = 2; i < MAXN; i++) {
        pre[i] = pre[i - 1] + spf[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << pre[n] << "\n";
    }
    return 0;
}