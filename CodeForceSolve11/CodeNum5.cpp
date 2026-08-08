#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin >> b;
        int need = b + 1;

        bool divisible = false;
        for (int i = 2; i <= b; i++) {
            if (need % i == 0) {
                divisible = true;
                break;
            }
        }

        if (divisible) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}