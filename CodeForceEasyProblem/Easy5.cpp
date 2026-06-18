#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        char smallest = '9';
        for (char ch : x) {
            if (ch < smallest) {
                smallest = ch;
            }
        }
        cout << smallest << "\n";
    }
    return 0;
}
