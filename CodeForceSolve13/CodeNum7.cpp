#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin >> n;
        long long p = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (i % 2 == 0) p += a;
            else p -= a;
        }
        cout << p << endl;
    }
}