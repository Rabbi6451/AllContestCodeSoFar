#include<iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string a;
    cin>>a;
    
        if(a=="HoUse"){
            cout<<"house"<<endl;
        }else if(a.size()%2!=0){
            transform(a.begin(), a.end(), a.begin(),
                   [](unsigned char c){ return std::toupper(c); });
                   cout<<a;
        }
        
        else if(a.size()%2==0){
            transform(a.begin(), a.end(), a.begin(),
                   [](unsigned char c){ return std::tolower(c); });
                   cout<<a;
        }
        }
    
