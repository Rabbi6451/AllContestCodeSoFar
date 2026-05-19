#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<int> t(b);
        for (int i = 0; i < b; i++) {
            cin >> t[i];
        }

        int count = 0;
        bool inSequence = false;

        for (int i = 0; i < b; i++) {
            if (t[i] == 0) {
                if (i > 0 && t[i - 1] == 0) {
                    inSequence = true;
                }
                if (inSequence) {
                    count++;
                }
            } else {
                inSequence = false;
            }
        }

        cout << count << endl;
    }
}   