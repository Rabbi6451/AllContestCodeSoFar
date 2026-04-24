#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;              
    vector<int> v2(3, 5);       
    vector<int> v3 = {1, 2, 3};  
    v1.push_back(10);            
    v1.push_back(20);

    cout << v1[0] << " " << v1.at(1)<<" " <<v2.at(1)<< endl; 
}
