#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,h,l;
        cin >> n >> h >> l;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int rowCount=0, colCount=0, both=0;
        for(int x:a){
            if(x<=h) rowCount++;
            if(x<=l) colCount++;
            if(x<=h && x<=l) both++;
        }
        int usableTotal = rowCount + colCount - both;

        int maxPairs = min({rowCount, colCount, usableTotal/2, n/2});

        cout << maxPairs << "\n";
    }
}
