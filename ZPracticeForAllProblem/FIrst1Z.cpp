#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; i++) cin >> doors[i];

        int count = 0;
        bool result = true;
        for(int i=0;i<n;i++){
            if(doors[i]!=1){
                count++;
            }else{
                break;
            }
        }
        int finalresult = n-count-1;
        if(finalresult>x){
            cout<<"No"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        cout<<finalresult<<endl;

    }
        
}