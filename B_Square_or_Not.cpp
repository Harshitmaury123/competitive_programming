#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
       int root = sqrt(n); 
      if(root*root!=n){
        cout<<"No"<<endl;
      }
      else{
        int count1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
            count1++;
        }
        if(count1==4*(root-1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
       
      }
    }
}