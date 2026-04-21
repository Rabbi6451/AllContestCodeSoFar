#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        int x = nums[i];
        vector<int> binary;
        while(x>0){
            binary.push_back(x%2);
            x/=2;
        }
        for(int j=binary.size()-1;j>=0;j--){
            cout<<binary[j];
        }
        cout<<"\n";
    }
        
}