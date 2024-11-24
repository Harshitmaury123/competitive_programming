#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
   int a,b;
   cin>>a>>b;
   if(b==0){
    if(a%2==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
   }
   else{
    if(b%2!=0 && a%2!=0){
    cout<<"no"<<endl;
    }
   else if(b%2!=0 && a%2==0){
  if(a!=0){
    cout<<"yes"<<endl;
  }
  else{
    cout<<"no"<<endl;
  }
//    cout<<"yes"<<endl;
    }
     else if(b%2==0 && a%2==0){
    cout<<"yes"<<endl;
   }
   else if(b%2==0 && a%2!=0){
    cout<<"no"<<endl;
   }
   }
  
    }
}