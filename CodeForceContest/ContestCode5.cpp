#include <iostream>
using namespace std;

int main(){
   
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        int total_open_a = count(a.begin(), a.end(), '(');
        int total_open_b = count(b.begin(), b.end(), '(');
    
        int same_open=0, same_close=0, mixed=0;
        for(int i=0;i<n;i++){
            if(a[i]=='('&&b[i]=='(') same_open++;
            else if(a[i]==')'&&b[i]==')') same_close++;
            else mixed++;
        }
        if(mixed%2!=0 || same_open+mixed/2!=n/2){cout<<"NO\n";continue;}
        
        int ba=0, bb=0; 
        bool ok=true;
        for(int i=0;i<n;i++){
            if(a[i]=='('&&b[i]=='('){ba++;bb++;}
            else if(a[i]==')'&&b[i]==')'){ba--;bb--;}
            else {
                if(ba<=bb){ba++;bb--;}
                else{ba--;bb++;}
            }
            if(ba<0||bb<0){ok=false;break;}
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
    return 0;
}