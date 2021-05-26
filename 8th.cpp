#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,n;
        cin>>a>>b>>n;
        if(n%2==0)
        {
            c=max(a,b)/min(a,b);
            cout<<c<<endl;
        }
        else
        {
            d=max(a*2,b)/min(a*2,b);
            cout<<d<<endl;
        }
    }
    return 0;
}