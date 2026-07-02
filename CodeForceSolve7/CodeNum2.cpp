#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        vector<int> arr(a);

        for(int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        int count = 0;
        int i = 0;

        while(i < a) {
            if(arr[i] == 1) {
                int run = 0;
                while(i < a && arr[i] == 1) {
                    run++;
                    i++;
                }
                if(run >= 2) {
                    count += (run - 1);
                } else {
                    count += run;
                }
            } else {
                i++;
            }
        }

        if(a > count) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
