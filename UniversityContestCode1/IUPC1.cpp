#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    while(a--){
       
        unsigned long long k;
        cin>>k;
        unsigned long long m = (k/2);
        unsigned long long ans1 = m*(m+1)*(2*m+1)/6;
        cout<<ans1<<"\n";
        
    }
}