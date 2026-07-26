#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        string b, c;
        cin >> b >> c;  
        swap(b[0],c[0]);
        cout << b << " " << c << endl;
    }
}
