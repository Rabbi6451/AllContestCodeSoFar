#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count1 = 0; 
    
    while (n--) {
        vector<int> t(3);
        int count = 0; 
        
        for (int i = 0; i < 3; i++) {
            cin >> t[i];
            count += t[i];
        }
        
        if (count > 1) {
            count1++;
        }
    }

    cout << count1;
}
