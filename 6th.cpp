#include <bits/stdc++.h>
using namespace std;

int main() {
	long T,C,D,L,catsOnGround,catsOnDog;
	cin>>T;
	while(T--)
	{
	    cin>>C>>D>>L;
	    catsOnGround = ( L - 4 * D )/4;
	    catsOnDog = C - catsOnGround;
	    if( L % 4 || L < 4 * D || L > 4 * ( C + D ) || catsOnDog > 2 * D)
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}