#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include<iostream>
#include<iostream>

using namespace std;

int main(){
    fast;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 1) cout << i+1 << " ";
            else cout << i-1 << " ";
        }
        cout << "\n";
    }
}