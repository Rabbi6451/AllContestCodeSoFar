#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int a;
    if (!(cin >> a)) return 0;

    while (a--) {
        int b;
        cin >> b;
        
        vector<int> t(b);
        for (int i = 0; i < b; i++) {
            cin >> t[i];
        }

        unordered_map<int, int> counts;
        int mostFrequent = t[0];
        int maxCount = 0;

        for (int num : t) {
            counts[num]++;
            if (counts[num] > maxCount) {
                maxCount = counts[num];
                mostFrequent = num;
            }
        }

        cout << mostFrequent << endl;
    }
    return 0;
}   