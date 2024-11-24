#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
  int x,y,k;
  cin>>x>>y>>k;
   int X,Y;

X=x%k==0?x/k:x/k+1;
Y=y%k==0?y/k:y/k+1;
  if(X>Y){
    cout<<2*X-1<<endl;
  }
  else{
    cout<<2*Y<<endl;
  }
    }
}