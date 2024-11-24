#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
         unordered_map<char,int>mpp;
       unordered_map<char,int>mpp1;
       unordered_map<char,int>mpp2;
       int ans=0;
       int cnt1=0,cnt2=0;
        for(int i=0;i<n;i+=2){
           mpp[s[i]]++;
       }
      
       for(int i=0;i<n;i+=2){
           mpp1[s[i]]++;
            cnt1++;
       }
        for(int i=1;i<n;i+=2){
           mpp2[s[i]]++;
           cnt2++;
       }

       int max1=-1;
       int max2=-1;
       for(auto it:mpp1){
        max1=max(max1,it.second);
       }
        ans+=(cnt1-max1);
        for(auto it:mpp2){
        max2=max(max2,it.second);
       }
       ans+=(cnt2-max2);
       
       cout<<ans<<endl;
       }
}
