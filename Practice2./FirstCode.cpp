#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    vector<int> output;
    unordered_set<int> seen;

    for (int x : input) {
        if (seen.find(x) == seen.end()) {
            output.push_back(x);
            seen.insert(x);
        }
    }
    for (int i = 0; i < output.size(); i++) {
        cout << output[i]<<" ";
        
    }
}

