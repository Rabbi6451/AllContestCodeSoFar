#include<iostream>
#include<set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    int maxFreq = 0, element = -1;
    for (auto p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            element = p.first;
        }
    }

    cout <<element<<endl 
         <<maxFreq<< endl;
}