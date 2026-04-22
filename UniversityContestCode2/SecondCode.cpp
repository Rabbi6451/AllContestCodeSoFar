#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        set<char>s;
        for(char c:a) s.insert(c);
        for(char c:b) s.insert(c);

        cout<<s.size()-1<<endl;
    }
    return 0;
}