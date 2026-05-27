#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    string a;
    cin >> a;
    if (a[0]==toupper(a[0])) {
        cout << a;
    } else {
        a[0] = toupper(a[0]); 
        cout << a;
    }
}
