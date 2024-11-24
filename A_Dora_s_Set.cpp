#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int le,ri;
      cin>>le>>ri;
      if(le%2==0){
        cout<<(ri-le+1)/4<<endl;
      }
      else{
        cout<<(ri-le+2)/4<<endl;
      }
    }
}