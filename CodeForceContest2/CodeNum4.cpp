#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a(7); 
        int sum = 0;
        int max_val = -1000; 
        
        for(int i = 0; i < 7; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] > max_val) {
                max_val = a[i];
            }
        }
        int result = 2 * max_val - sum;
        
        cout << result << endl;
    }
}   