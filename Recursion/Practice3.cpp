#include<iostream>
using namespace std;

void print(int b) {
    if (b == 0) return;   
    cout << b << " " <<endl;
    print(b - 1);       
}

int main() {
    print(5);
    return 0;
}
