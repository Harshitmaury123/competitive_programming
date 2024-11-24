#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int x,y,k;
    cin>>x>>y>>k;
    int ans=0;
  
    int rem1=x%k;
    int rem2=y%k;
    ans+=x/k;
    ans+=y/k;
     if(rem1==0 && rem2==0){
        cout<<2*ans<<endl;
     }
    else{
        if(rem1==0 && rem2!=0){
             ans++;
             ans+=2;
        }
        else{
             ans++;
             ans+=2;
        }
        cout<<ans<<endl;
    }
  }
}