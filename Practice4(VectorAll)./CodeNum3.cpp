#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a;
    cin >> a;
    unordered_set<int> t;  

    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        t.insert(x);  
    }

    for (int val : t) {
        cout << val << " ";
    }
}
