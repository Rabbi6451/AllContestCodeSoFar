#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool first = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (!first) {
                cout << " ";
            }
            cout << i + 1;  
            first = false;
        }
    }
    
    return 0;
}