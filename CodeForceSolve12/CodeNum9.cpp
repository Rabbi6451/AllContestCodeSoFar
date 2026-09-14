#include<iostream>
#include<vector> 
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> p(n+1);
    for (int i = 1; i <= n; i++) cin >> p[i];

    vector<int> S;
    for (int i = 1; i <= n; i++)
        if (p[i] != i) S.push_back(i);

    int k = S.size();
    bool ok = true;
    for (int j = 0; j < k; j++){
        if (p[S[j]] != S[k-1-j]) 
        {
            ok = false;
            break;
        }
    }

    cout << (ok?"YES":"NO")<<endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) 
    solve();
}