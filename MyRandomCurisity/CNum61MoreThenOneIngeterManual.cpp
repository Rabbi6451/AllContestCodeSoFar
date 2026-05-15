#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) freq++;
        }
        if (freq > 1) {
            count++;
            for (int j = i+1; j < n; j++) {
                if (arr[i] == arr[j]) arr[j] = -1; 
            }
        }
    }

    cout << count << endl;
    return 0;
}
