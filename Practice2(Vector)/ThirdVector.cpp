#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;
        string s;
        cin >> s;

        unordered_set<char> used;
        int time = 0;

        for (char c : s) {
            time += (used.count(c) ? 1 : 2);
            used.insert(c);
        }

        cout << time << endl;
    }
}
