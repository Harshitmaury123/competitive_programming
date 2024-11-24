#include<vector>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
  long long n;
  cin>>n;
  vector<int>a(n);
  long long sum=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  sort(a.begin(),a.end());
  if(n<=2){
    cout<<-1<<endl;
    return;
  }int mid=n/2;
  int avg=a[mid];
  if(n&1==0)mid++;
  
long long x=(2*n*avg)-sum+1;
if(x<=0)
{
    cout<<0<<endl;
    return;
}
cout<<x<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}