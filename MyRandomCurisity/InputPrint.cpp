#include<iostream>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    vector<int> t;
    int size,element;
    cout<<"Enter your size of array : ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Your number is : ";
        cin>>element;
        t.push_back(element);
    }
    display(t);
    return 0;


}