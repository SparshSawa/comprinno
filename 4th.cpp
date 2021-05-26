#include <iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ll t;
    cin>>t;
    while(t-->0)
    {
        ll n,flag=0;
        cin>>n;
        string s[n];
        for(ll i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i]=="cookie"&&s[i+1]!="milk")
            {
                flag=1;
                printf("NO\n");
                break;
            }
        }
        if(flag==0) printf("YES\n");
    }
    return 0;
}
    