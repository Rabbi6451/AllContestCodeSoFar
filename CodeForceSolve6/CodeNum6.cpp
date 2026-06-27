#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        bool result = false;
        cin>>b;
        string c,d;
        cin>>c>>d;
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        if(c==d){
            result = true;
        }
        if(result){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}