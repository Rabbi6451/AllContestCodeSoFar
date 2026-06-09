#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b;
            cin >> b;
            
            vector<int> t(b);
            for (int i = 0; i < b; i++) {
                cin >> t[i];
            }
            if (b <= 1) {
                cout << "Ok" << endl;
                continue; 
            }
            bool order = true;
            for (int i = 0; i < b - 1; i++) {
                if (t[i] > t[i + 1]) {
                    order = false;
                    break;
                }
            }

            if (order) {
                cout << "Ok" << endl;
            } else {
                cout << "Error" << endl;
            }
        }
    }
}   