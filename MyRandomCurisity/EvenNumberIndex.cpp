#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    vector<int> evens;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evens.push_back(arr[i]);
        }
    }
    
    for (int i = 0; i < evens.size(); i++) {
        cout << i + 1;  
        if (i != evens.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}