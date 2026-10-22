#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> vec;
        int k;
        for(int i=0;i<b;i++){
            cin>>k;
            vec.push_back(k);
        }
        sort(vec.begin(),vec.end());
        vector<int> result;
        for(int i=0;i<a;i++){
            
        }
    }
}
