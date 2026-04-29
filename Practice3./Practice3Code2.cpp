#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        total += coins[i];
    }
    
    sort(coins.rbegin(), coins.rend()); 
    
    int mySum = 0, count = 0;
    for (int c : coins) {
        mySum += c;
        count++;
        if (mySum > total - mySum) break;
    }
    
    cout << count << "\n";
    return 0;
}
