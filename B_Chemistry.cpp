#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     unordered_map<char,int>mpp;

     for(int i=0;i<n;i++){
        mpp[s[i]]++;
     }
     int cnt=0;
     for(auto ele:mpp){
        if(ele.second%2!=0){
            cnt++;
        }
     }
     if(cnt>k+1)
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
    }
}
