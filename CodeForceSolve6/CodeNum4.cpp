#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        vector<long long> t(b);
        for(int i = 0; i < b; i++) cin >> t[i];
        sort(t.begin(), t.end());

        long long answer = 0;
        
        if(b%2==0){
            for(int i=1;i<b;i=i+2){
                answer = answer + t[i];
            }
        }else{
            for(int i=0;i<b;i=i+2){
                answer = answer + t[i];
            }
        }

        cout << answer << "\n";
    }
}