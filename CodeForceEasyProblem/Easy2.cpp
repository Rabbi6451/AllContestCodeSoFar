#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n, k, l, c, d, p, nl, np;
  
    
    if (cin >> n >> k >> l >> c >> d >> p >> nl >> np) {
        long long total_drink_ml = k * l;
        long long total_slices = c * d;
        long long total_salt_g = p;

        long long toasts_by_drink = total_drink_ml / nl;
        long long toasts_by_lime = total_slices; 
        long long toasts_by_salt = total_salt_g / np;

        long long max_total_toasts = min({toasts_by_drink, toasts_by_lime, toasts_by_salt});

        cout << max_total_toasts / n << endl;
    }

    return 0;
}   