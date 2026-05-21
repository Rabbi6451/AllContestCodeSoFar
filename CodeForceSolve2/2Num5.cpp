
#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1){
            cout << 1 << "\n";
        } else if(n == 2){
            cout << 2 << " " << 1 << "\n";
        } else {
            vector<int> arr;
            arr.push_back(2*n - 4);
            arr.push_back(1);
            arr.push_back(2*n - 1);
            for(int i = 2; i <= n-2; i++){
                arr.push_back(i);
            }
            for(int i = 0; i < (int)arr.size(); i++){
                cout << arr[i];
                if(i + 1 < (int)arr.size()) cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}