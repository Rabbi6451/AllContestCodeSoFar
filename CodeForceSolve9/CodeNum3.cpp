#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
 
int main() {
    int b;
    cin >> b;
    vector<int> t(b);
    for (int i = 0; i < b; i++) {
        cin >> t[i];
    }
 
    unordered_set<int> seen;
    vector<int> unique;
    for (int x : t) {
        if (seen.find(x) == seen.end()) {
            seen.insert(x);
            unique.push_back(x);
        }
    }
 
    cout << unique.size() << "\n";
    for (int x : unique) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}