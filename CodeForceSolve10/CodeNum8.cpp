#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int count = 1;
    int c;
    cin >> c;    
    for(int i = 1; i < a; i++){
        int b;
        cin >> b;
        if(b > c){ 
            count++;
            c = b;
        }
    }
    cout << count << endl;
}