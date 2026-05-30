#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> t(b);
        for(int i=0;i<b;i++) cin>>t[i];
        int minimum = *min_element(t.begin(),t.end());
        int maximum = *max_element(t.begin(),t.end());
        double result = round(maximum-minimum)/2;
        int fresult = static_cast<int>(std::round(result));
        cout<<fresult<<endl;
    }
} 