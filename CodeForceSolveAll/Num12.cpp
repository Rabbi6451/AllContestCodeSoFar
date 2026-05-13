#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

int main(){
    int a;
    int count =0;
    cin>>a;
    vector<int> t(a);
    for(int i=0;i<a;i++) cin>>t[i];
   sort(t.begin(),t.end());
   for(int i=0;i<a;i++){
    if(t[i]!=0&&t[i]!=t[i+1]){
        count++;
    }
   }
   cout<<count;

}