#include <iostream>
using namespace std;

bool isPalindrome(string &s, int l, int r){
    if(l >= r) return true;
    if(s[l] != s[r]) return false;
    return isPalindrome(s, l + 1, r - 1);
}

void printReverse(int n){
    if(n == 0) return;         
    cout << n % 10;             
    printReverse(n / 10);
}

int main(){
    string s;
    cin >> s;
    cout << (isPalindrome(s, 0, s.length() - 1) ? "yes" : "no") << "\n";

    int num;
    cin >> num;
    printReverse(num);
    cout << "\n";

    return 0;
}