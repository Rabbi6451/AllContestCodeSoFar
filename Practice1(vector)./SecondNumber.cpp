#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
    int c;
    cin>>c;
    string b;
    cin>>b;

    unordered_set<char> count1;
    int sum=0;

    for(char c:b){
        sum+=(count1.count(c) ? 1 : 2);
        count1.insert(c);
    }
    cout<<sum;
}

}
