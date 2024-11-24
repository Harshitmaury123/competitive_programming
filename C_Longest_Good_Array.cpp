#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
     long long jumpsize=1;
      long long cnt=0;
      while(l<=r){
        l=l+jumpsize;
        cnt++;
        jumpsize++;;
      }
      cout<<cnt<<endl;
    }
}