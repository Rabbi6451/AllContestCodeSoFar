#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int b, c, d;
        cin >> b >> c >> d;
        int dNeed = d * 5;

        bool result = true; 
        int first = 0,second = 0;
        while(first==dNeed || second ==dNeed){
            first = first + b;
            second = second + c;
            if(second == dNeed){
                result=false;
            }
        }

        if (result) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
