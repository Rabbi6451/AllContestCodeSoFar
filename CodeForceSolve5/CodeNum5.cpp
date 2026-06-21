#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        int count1 = 0;
        int count0 = 0;
        int maincount = 0;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++){
            cin>>t[i];
        }
        for(int i=0;i<b;i++){
            if(t[i] == -1){
                count1++;
            }else if(t[i]== 0){
                count0++;
            }
        }
        if(count1%2!=0){
            maincount = 2;
        }
        cout<<maincount+count0<<endl;
    }
}