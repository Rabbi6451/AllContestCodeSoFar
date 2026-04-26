#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a,i;
    cin>>a;
    while(a--){
    int b,c;
    cin>>b>>c;
    int count=0;
    vector<int> t(b);
    for(int i=0;i<b;i++){
        cin>>t[i];
    }
    bool prove = false;
    for(int i=0;i<b;i++){
        if(t[i]==c){
            prove = true;
            break;
        }
    }
    if(prove){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}
    
}