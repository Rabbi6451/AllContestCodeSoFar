#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long b, c, d;
        cin >> b >> c >> d;
        long long target = d*5;
        long long total = 0;
        bool found = false;
        while(true){
            total = total + b;
            if(total>target){
                cout<<"NO"<<endl;
                break;
            }
            total = total + c;
            if(total>target){
                cout<<"YES"<<endl;
                break;
            }
        }
        
    }
    return 0;
}
