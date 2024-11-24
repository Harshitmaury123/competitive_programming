#include<iostream>
#include<vector>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int cnt=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<0<<endl;
    }
    else{
        cout<<cnt<<endl;
    }
  }
}