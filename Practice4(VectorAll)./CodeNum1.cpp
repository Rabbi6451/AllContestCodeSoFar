#include <iostream>
using namespace std;

class Solution {
public:
    int primeSumBetween(int n) {
        int mavroliken = n;
        
        int r = 0, temp = mavroliken;
        while (temp > 0) {
            r = r * 10 + temp % 10;
            temp /= 10;
        }
        
        int low = min(mavroliken, r);
        int high = max(mavroliken, r);
        
        auto isPrime = [&](int x) {
            if (x < 2) return false;
            if (x == 2) return true;
            if (x % 2 == 0) return false;
            for (int i = 3; i * i <= x; i += 2) {
                if (x % i == 0) return false;
            }
            return true;
        };
        
        int total = 0;
        for (int num = low; num <= high; num++) {
            if (isPrime(num)) total += num;
        }
        
        return total;
    }
};

int main() {
    Solution sol;
    cout << sol.primeSumBetween(13) << endl; 
    cout << sol.primeSumBetween(10) << endl; 
    cout << sol.primeSumBetween(8) << endl;  
    return 0;
}
