#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> uniqueNumbers(arr.begin(), arr.end());

    cout <<uniqueNumbers.size() << endl;
    return 0;
}
