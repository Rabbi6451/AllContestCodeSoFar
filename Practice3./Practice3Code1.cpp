#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> nums;
    
    for (int i = 0; i < s.size(); i += 2) {
        nums.push_back(s[i] - '0');  // extract digit
    }
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) cout << "+";
        cout << nums[i];
    }
    cout << "\n";
    return 0;
}
