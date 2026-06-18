#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int mn = a[0], mx = a[0], amazing = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > mx) {
            amazing++;
            mx = a[i];
        } else if(a[i] < mn) {
            amazing++;
            mn = a[i];
        }
    }
    cout << amazing << endl;
}
// 10
// 4664 6496 5814 7010 5762 5736 6944 4850 3698 7242
