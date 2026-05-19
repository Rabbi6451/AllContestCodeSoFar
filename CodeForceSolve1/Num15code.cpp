#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    while(n--){
        int num,rev=0,digit;
        cin>>num;
        while(num>0){
            digit = num%10;
            rev = rev+digit;
            num = num/10;
        }
        cout<<rev+num<<endl;
    }
}
