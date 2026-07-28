#include<iostream>
#include<set>
using namespace std;

bool niceyear(int year){
    string s = to_string(year);
    set<char> digits(s.begin(),s.end());
    return digits.size()==s.size();


}
int main(){
    int a;
    cin>>a;
    while(true){
        a++;
        if(niceyear(a)){
            cout<<a<<endl;
            break;
        }
    }
}