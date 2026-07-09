#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b, c;
        cin >> b >> c;
            cout<<b+max(0,(c-b)/2)<<endl;
    }
}