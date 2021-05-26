#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--){
      double salary, hra,da,grs;
      cin>>salary;
      if(salary < 1500){
          hra = 0.1 * salary;
          da = 0.9 * salary;
          grs = hra + da + salary;
          cout<<fixed<<setprecision(2)<<grs<<endl;
      }else if(salary >= 1500){
          hra = 500;
          da = 0.98 * salary;
          grs = hra + da + salary;
          cout<<fixed<<setprecision(2)<<grs<<endl;
      }
      
    }

}
