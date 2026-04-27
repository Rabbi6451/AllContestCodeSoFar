#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> parts;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                parts.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        cout << parts.size() << "\n";
        for (int x : parts) cout << x << " ";
        cout << "\n";
    }
}
/*Input
5
5009
7
9876
10000
10
Output
2
5000 9
1
7 
4
800 70 6 9000 
1
10000 
1
10 
*/

