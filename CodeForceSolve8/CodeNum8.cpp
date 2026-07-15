#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
    string s;
    cin>>s;
    int maxCount = 0, currentCount = 0;

    for (char c : s) {
        if (c == '#') {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    cout << (maxCount+1)/2 << endl;
    }
   
}
