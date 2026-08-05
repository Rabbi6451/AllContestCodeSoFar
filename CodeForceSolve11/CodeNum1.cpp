#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int i;
        int b=3;
        int count=0;
        vector<int> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        sort(t.begin(),t.end());
        int first = t[2]-t[1];
        int second = t[2]-t[0];
        int third = t[1]-t[0];
        int result1 = min(first,second);
        int result = min(result1,third);

        cout<<result<<endl;
    }
}