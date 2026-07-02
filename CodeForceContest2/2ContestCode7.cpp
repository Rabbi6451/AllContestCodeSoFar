#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int blocks = 1;
        for(int i = 1; i < n; i++)
            if(s[i] != s[i-1]) blocks++;
        cout << (blocks == 2 ? 2 : 1) << "\n";
    }
    return 0;
}



// #include <iostream>
// using namespace std;

// bool isPalindrome(const string &s) {
//     int l = 0, r = s.size() - 1;
//     while (l < r) {
//         if (s[l] != s[r]) return false;
//         l++;
//         r--;
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int minwf;
//         if (isPalindrome(s)) {
//             minwf = 1;
//         } else {
//             minwf = 2;
//         }
//         cout << minwf << endl;
//     }
//     return 0;
// }
