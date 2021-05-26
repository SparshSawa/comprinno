#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int l=0,b=0;
		for(int i=n-1;i>=0;i--)
		{
			if((arr[i]==arr[i-1]) && l==0)
			{
				//cout<<"i = "<<i<<endl<<"i-1 = "<<i-1<<endl;
				l=arr[i];
				i=i-2;
				//cout<<endl<<"Length "<<l<<endl;
			}
			if((arr[i]==arr[i-1]) && l!=0)
			{
				//cout<<"i = "<<i<<endl<<"i-1 = "<<i-1<<endl;
				b=arr[i];
				//cout<<endl<<"Breadth "<<b<<endl;
				break;
			}
		}
		int area=l*b;
		if(area==0)
		{
			cout<<"-1"<<endl;
		}
		else
			cout<<area<<endl;
	}
}