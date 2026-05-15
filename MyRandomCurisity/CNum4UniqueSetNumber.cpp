#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> uniqueNumbers(arr.begin(), arr.end());

    cout << "Number of unique elements: " << uniqueNumbers.size() << endl;
    return 0;
}
