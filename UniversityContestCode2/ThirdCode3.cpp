#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        set<char> used;
        int time =0;
        
        for(char c:s){
            if(used.count(c)){
                time+=1;
            }else{
                time+=2;
                used.insert(c);
            }
        }
        cout<<time<<endl;
    }
}