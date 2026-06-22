#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        vector<int> t(b);
        for (int i = 0; i < b; i++) cin >> t[i];

        int maxium = *max_element(t.begin(), t.end());
        int result = 0;

        for (int i = 0; i < b; i++) {
            if (t[i] == maxium) {
                result++;
            }
        }
        cout << result << endl;
    }
}
