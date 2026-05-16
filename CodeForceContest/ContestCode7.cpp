#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        vector<int> t(b);
        set<int> z;
        for(int i = 0; i < b; i++) {
            cin >> t[i];
            z.insert(t[i]);
        }

        if (z.size() == 1 && *z.begin() == 0) {
            cout << b << endl;
        } else {
            z.erase(0);
            cout << z.size() << endl;
        }
    }
}   