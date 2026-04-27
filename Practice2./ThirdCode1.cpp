#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int a; 
        cin >> a; 

        int others[3];
        for (int i = 0; i < 3; i++) {
            cin >> others[i]; 
        }

        int count = 0;
        for (int i = 0; i < 3; i++) {
            if (others[i] > a) count++;
        }

        cout << count << "\n";
    }
}
