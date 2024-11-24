#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int g=__gcd(a,b);
    vector<int>v(n);
    for(int i=0;i<n;i++)
     {
        cin>>v[i];
        v[i]%=g;
     }

     sort(v.begin(),v.end());
     int ans=v[n-1]-v[0];
     for(int i=1;i<n;i++){
       ans=min(ans,v[i-1]+g-v[i]);
     }
     cout<<ans<<endl;
}
}
