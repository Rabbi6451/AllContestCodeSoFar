#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    int count = 0;
    for (auto &p : freq) {
        if (p.second > 1) count++;
    }

    cout << count << endl;
    return 0;
}
