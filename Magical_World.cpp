#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int a,b,x;
      cin>>a>>b>>x;
      if(a*b<=x*x){
          cout<<0<<endl;
      }
     else if(1*b<=x*x ||  1*a<=x*x){
         cout<<1<<endl;
     }
     else if(1*a>x*x &&  1*b>x*x){
         cout<<2<<endl;
     }
  }
}
