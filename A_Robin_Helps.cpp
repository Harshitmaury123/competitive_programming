#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
   int k;
   cin>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int robin=0;
   int cnt=0;
   for(int i=0;i<n;i++){
    if(a[i]>=k){
        robin+=a[i];
    }
    else if(a[i]==0 && robin>0){
        robin--;
        cnt++;
    }
    else{
        continue;
    }
   }
   cout<<cnt<<endl;
   return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}