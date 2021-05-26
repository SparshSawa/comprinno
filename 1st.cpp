#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int a[26]={0},count=0,flag1=0,flag2=0;
	    vector<int> v;
	    for(int i=0;i<s.size();i++)
	    {
	        a[s[i]-'a']++;
	    }
	    for(int j=0;j<26;j++)
	    {
	        if(a[j]!=0){v.push_back(a[j]);count++;}
	    }
	    if(count<3){cout<<"Dynamic"<<endl;}
	    else
		{
	        sort(v.begin(),v.end());
	        int k;
	        for(k=2;k<count;k++)
            {
                if(v[k]!=(v[k-1]+v[k-2]))
                {
                    flag1=1;
                    break;
                }
            }
            swap(v[0],v[1]);
            for(k=2;k<count;k++)
            if(v[k]!=(v[k-1]+v[k-2]))
            {
                flag2=1;
                break;
            }
            if(flag1==0 || flag2==0){cout<<"Dynamic"<<endl;}
            else{cout<<"Not"<<endl;}
	    }
	}
	return 0;
}