#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> next_num;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if(next_num.count(s) == 0) {
            // First time
            cout << "OK" << endl;
            next_num[s] = 1;
        }
        else {
            int num = next_num[s];
            while(true) {
                string new_name = s + to_string(num);
                
                if(next_num.count(new_name) == 0) {
                    cout << new_name << endl;
                    next_num[new_name] = 1;
                    next_num[s] = num + 1;
                    break;
                }
                num++;
            }
        }
    }
    return 0;
}