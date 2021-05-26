#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char ch;
	    cin>>ch;
	    ch=toupper(ch);
	    if(ch=='B')cout<<"BattleShip"<<endl;
	    if(ch=='C')cout<<"Cruiser"<<endl;
	    if(ch=='D')cout<<"Destroyer"<<endl;
	    if(ch=='F')cout<<"Frigate"<<endl;
	    
	}
	return 0;
}