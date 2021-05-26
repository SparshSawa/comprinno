#include<iostream>
using namespace std;
int main()
{   int t;
cin>>t;
while(t--)
{
    int n,i,j;
    cin>>n;
    int a[n],b[n];;
    for(i=0;i<n;i++)
       cin>>a[i];
       if(n%2!=0)
       {
       	for(i=0,j=n-1;i<n/2 && j>n/2;i++,j--)
       	{
       	  b[i]=i+1;
       	  b[j]=i+1;
       	  
       	  
}
b[n/2]=n/2+1;


	   for(i=0;i<n;i++)
	   {
	   	if(a[i]!=b[i]){
		   
	   	  cout<<"no"<<endl;
	   	  break;
	   }
	   }
	   if(i==n)
	     cout<<"yes"<<endl;
	   
}
else
cout<<"no"<<endl;

}}