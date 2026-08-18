#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a;
    cin >> a;
    while (a--) {
        long long b;
        cin >> b;
        long long k = 1;
        for(long long p = 2;p*p<=b;p++){
            if(b%p==0){
                k = k * p;
                while(b%p==0) b = b/p;
            }
        }
        if(b>1) k = k * b;
        cout<<k<<endl;
    }
    return 0;
}
