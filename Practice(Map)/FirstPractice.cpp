#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> t(a);
    for (int i = 0; i < a; i++)
    {
        cin >> t[i];
    }
    map<int, int> count;
    for(int x : t) count[x]++;
    for(auto &p:count){
        cout<<p.first <<" : "<<p.second<<endl;
    }
}