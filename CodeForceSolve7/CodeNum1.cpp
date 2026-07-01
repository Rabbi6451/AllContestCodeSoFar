#include<iostream>
#include<set>

using namespace std;

int main(){
    int a;
    cin>>a;
    string b;
    cin>>b;
    if(a>26){
        cout<<-1;
    }
    set<char> t;
    for(char s : b) t.insert(s);
    cout<<a-t.size();


}