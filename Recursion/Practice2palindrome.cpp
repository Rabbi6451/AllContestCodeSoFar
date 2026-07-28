#include<iostream>
using namespace std;

long long reverseNumber(long long n, long long rev = 0) {
    if (n == 0) return rev;
    int digit = n % 10;
    return reverseNumber(n / 10, rev * 10 + digit);
}

int main() {
    long long n;
    cin >> n;  
    cout << reverseNumber(n) << "\n";
    return 0;
}


// int main() {
//     long long n;
//     cin >> n; 

//     long long rev = 0;
//     while (n > 0) {
//         int digit = n % 10;       
//         rev = rev * 10 + digit;   
//         n /= 10;                  
//     }

//     cout << rev << "\n";
//     return 0;
// }