#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);      
    v.pop_back();         
    v.insert(v.begin()+1, 99); 
    v.erase(v.begin());   

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
}
