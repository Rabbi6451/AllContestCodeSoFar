#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            count++;
            if (count >= 3) {
                ans++;  
            }
        } else {
            count = 0; 
        }
    }

    cout << ans << endl;
}


// int main() {
//     int n;
//     cin >> n;  
//     string s;
//     cin >> s;

//     int result = 1;   
//     int count = 1; 

//     for (int i = 1; i < n; i++) {
//         if (s[i] == s[i - 1]) {
//             count++;               
//             result = max(result, count);
//         } else {
//             count = 1;       
//         }
//     }

//     cout << result-2<< endl;
// }
