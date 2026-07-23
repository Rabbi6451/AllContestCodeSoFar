#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long a, b, x;
        cin >> a >> b >> x;

        vector<long long> A, B;
        long long v = a;
        A.push_back(v);
        while(v > 0){ v /= x; A.push_back(v); }

        v = b;
        B.push_back(v);
        while(v > 0){ v /= x; B.push_back(v); }

        long long best = LLONG_MAX;
        for(int i = 0; i < (int)A.size(); i++){
            for(int j = 0; j < (int)B.size(); j++){
                long long cost = (long long)i + j + llabs(A[i] - B[j]);
                best = min(best, cost);
            }
        }
        cout << best << "\n";
    }
}