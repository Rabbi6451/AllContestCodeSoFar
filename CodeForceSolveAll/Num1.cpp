#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cin >> a;
    string target = "codeforces";
    
    while(a--){
        string b;
        cin >> b;
        bool found = false;
        
        for(char ch : b){
            if(target.find(ch) != string::npos){
                found = true;
                break;
            }
        }
        
        if(found){
            cout << "yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}   