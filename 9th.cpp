#include <iostream>
using namespace std;

int main() {
	long long int n,k,arr;
    cin>>n;
    while(n--){
        long long int min=1000000;
        cin>>k;
        long long int i;
        for(i=0;i<k;i++){
            cin>>arr;
            if(arr<=min){
                min=arr;
            }
        }
        long long int ans=min*(k-1);
        cout<<ans<<"\n";
    }
	return 0;
}