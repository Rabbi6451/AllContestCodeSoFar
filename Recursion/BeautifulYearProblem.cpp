#include<iostream>
#include<set>
using namespace std;

bool RealYear(int year){
    string s =to_string(year);
    set<char> digits(s.begin(),s.end());
    return digits.size()==s.size();
}
int main(){
    int y;
    cin>>y;
    while(true){
        y++;
        if(RealYear(y)){
            cout<<y<<endl;
            break;
        }
    }
}