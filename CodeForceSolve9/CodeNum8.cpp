#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> x(4);
    for (int i = 0;i<4;i++) cin>>x[i];
    sort(x.begin(), x.end()); 
    int a_plus_b_plus_c = x[3];
    int a = a_plus_b_plus_c - x[0]; 
    int b = a_plus_b_plus_c - x[1]; 
    int c = a_plus_b_plus_c - x[2];
    cout <<a<<" "<<b<<" "<<c<< endl;
    
}
