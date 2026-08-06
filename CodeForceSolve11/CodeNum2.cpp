#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int count = 1;
        int b;
        cin>>b;
        string c;
        cin>>c;
        for(int i=1;i<b;i++){
            if(c[i]!=c[i-1]) count++;
        }
        int minus = 0;
        for(int i=1;i<b-1;i++){
            if(c[i]!=c[i-1]&&c[i]!=c[i+1]){
                if(c[i-1]==c[i+1]){
                    minus=2;
                    break;
                }else{
                    minus = 1;
                }
            }
        }
        count = count - minus;
        cout<<count<<endl;


    }
}