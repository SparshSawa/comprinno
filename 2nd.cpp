#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int a[3],b[3],c[3];
	    cin >> a[0] >> a[1] >> a[2];
	    cin >> b[0] >> b[1] >> b[2];
	    cin >> c[0] >> c[1] >> c[2];
	    int asum=a[0]+a[1]+a[2];
	    int bsum=b[0]+b[1]+b[2];
	    int csum=c[0]+c[1]+c[2];
	    if(asum==bsum || bsum==csum || asum==csum)
	        cout << "no" <<endl;
	    else{
	        if(asum>bsum && asum>csum){
	            if(bsum>csum){
	                for(int i=0;i<3;i++){
	                    if(a[i]>=b[i] && a[i]>=c[i] && b[i]>=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	            else{
	                for(int i=0;i<3;i++){
	                    if(a[i]>=b[i] && a[i]>=c[i] && b[i]>=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	            else{
	                for(int i=0;i<3;i++){
	                    if(a[i]>=b[i] && a[i]>=c[i] && b[i]<=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
				}
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	        }
	        else if(bsum>asum && bsum>csum){
	            if(asum>csum){
	                for(int i=0;i<3;i++){
	                    if(a[i]<=b[i] && a[i]>=c[i] && b[i]>=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
 continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	            else{
	                for(int i=0;i<3;i++){
	                    if(a[i]<=b[i] && a[i]<=c[i] && b[i]>=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	        }
	        else if(csum>asum && bsum<csum){
	            if(asum>bsum){
	                for(int i=0;i<3;i++){
	                    if(a[i]>=b[i] && a[i]<=c[i] && b[i]<=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
}
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
	                }
	            }
	            else{
	                for(int i=0;i<3;i++){
	                    if(a[i]<=b[i] && a[i]<=c[i] && b[i]<=c[i]){
	                        if(i==2){
	                            cout << "yes" << endl;
	                        }
	                        continue;
	                    }
	                    else{
	                        cout << "no" << endl;
	                        break;
	                    }
 }
	            }
	        }
	    }
	}
	return 0;
}
