#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> t(b);
    for (int i = 0; i < b; i++) {
        cin >> t[i];
    }

    int c = 5; 
    int d = 7; 
    
    bool result = true;
    
    for (int i = 0; i < b - 1; i++) {
        int diff = std::abs(t[i] - t[i+1]);
        
        if (diff != c && diff != d) {
            result = false;
            break; 
        }
    }

    if (result) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }
    
    }
}   